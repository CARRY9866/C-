//process.on('uncaughtException');
var d = require('domain').create()
d.on('error', function(err) {
    // handle the error safely
    console.log(err)
})
var http = require('https');
var timer = require('timers');
var querystring = require('querystring');
var postData = querystring.stringify({
    'msg': 'Hello World!'
});

var options = [{
    "rejectUnauthorized": false,
	hostname: 'ecourse.ccu.edu.tw',
    port: 443,
    path: '/php/news/content.php?a_id=91&system=0&PHPSESSID=is7334vl7utpqdrs84lthh0962',
    method: 'GET',
    headers: {
        Cookie: '__utmz=157517486.1505576731.1.1.utmccn=(direct)|utmcsr=(direct)|utmcmd=(none); _ga=GA1.3.596875527.1502435067; __utma=157517486.1209087001.1505576731.1507221604.1507306606.12; PHPSESSID=7sep74ilsoslf7bv0gss0o7c44',
        Referer: 'https://ecourse.ccu.edu.tw/php/news/content.php?a_id=91&system=0&PHPSESSID=is7334vl7utpqdrs84lthh0962',
        'User-Agent': 'Safari/537.3'
    }
}];
var count = 0;

var timeoutid;
var target = 570000;
d.run(function() {
    // the asynchronous or synchronous code that we want to catch thrown errors on
    timeoutid = timer.setInterval(hello, 10);
})

//var timeoutid = timer.setInterval(hello, 10);

function hello() {
    if (count < target) {
        var req = http.request(options[0], function(res) {
            /*console.log('STATUS: ' + res.statusCode);
            console.log('HEADERS: ' + JSON.stringify(res.headers));
            res.setEncoding('utf8');
            res.on('data', function (chunk) {
              console.log('BODY: ' + chunk);
            });*/
        });
        //req.write(postData);
        req.end();
        count++;
    }
    else {
    	clearInterval(timeoutid);
    	console.log('Done!');
    }

    /*req.on('error', function(e) {
      console.log('problem with request: ' + e.message);
    });*/

    // write data to request body
    //console.log('get!');

}
