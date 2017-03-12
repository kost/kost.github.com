
// var UINT32 = require('cuint').UINT32;

// var seed = document.getElementById('seed').value;
// var mac = document.getElementById('mac').value;
// var magic = document.getElementById('magic').value;


var CalculateSecrets = function() {
	var Zynpass = require('zynpass');
	var zynpass = new Zynpass();

	var seed = $("#seed").val();
	var mac = $("#mac").val();
	var magic = $("#magic").val();

	var result1 = zynpass.zyngenpass(seed);
	var result2 = zynpass.zynsecret(seed,mac);
	var result3 = zynpass.zyncalc(seed,mac,magic);

	$("#output1").html('ATEN1, ' + result1);
	$("#output2").html('ATEN1, ' + result2);
	$("#output3").html('ATEN1, ' + result3);
};


// A $( document ).ready() block.
$( document ).ready(function() {
	console.log( "ready!" );
	// var mum=UINT32(1,16);
	console.log( "secret!" );
	CalculateSecrets();
	$( "#target" ).submit(function() {
		CalculateSecrets();
		event.preventDefault();
	});
});






