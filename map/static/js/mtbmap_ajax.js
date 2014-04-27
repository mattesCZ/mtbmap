// methods for ajax requests
MTB.UTILS.AJAX = {};

MTB.UTILS.AJAX.csrfSafeMethod = function(method) {
    return (/^(GET|HEAD|OPTIONS|TRACE)$/.test(method));
};

MTB.UTILS.AJAX.getCookie = function(name) {
    var cookieValue = null;
    if (document.cookie && document.cookie !== '') {
        var cookies = document.cookie.split(';');
        for (var i = 0; i < cookies.length; i++) {
            var cookie = jQuery.trim(cookies[i]);
            // Does this cookie string begin with the name we want?
            if (cookie.substring(0, name.length + 1) === (name + '=')) {
                cookieValue = decodeURIComponent(cookie.substring(name.length + 1));
                break;
            }
        }
    }
    return cookieValue;
};

MTB.UTILS.AJAX.setupPost = function(event) {
    var csrfToken = MTB.UTILS.AJAX.getCookie('csrftoken');
    event.preventDefault();
    jQuery.ajaxSetup({
        crossDomain: false, // obviates need for sameOrigin test
        beforeSend: function(xhr, settings) {
            if (!MTB.UTILS.AJAX.csrfSafeMethod(settings.type)) {
                xhr.setRequestHeader('X-CSRFToken', csrfToken);
            }
        }
    });
};
