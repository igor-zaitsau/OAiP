function showVariantForm() {
	var div = document.getElementById( 'variantForm' ), span = document.getElementById( 'hint' ).children[ 1 ];

	if( span.innerHTML == '' ) {
		span.innerHTML = '<span style="display: none;">&larr; <span class="link" onclick="parent[ 0 ].location.href = \'../menu.html\';">Меню</span><span style="display: none;">|<span class="link" onclick="parent[ 0 ].location.href = document.getElementById( \'hint\' ).getAttribute( \'link\' );">Теория</span></span> / </span>[<span class="link" title="Расположение изменяемого содержимого" onclick="show_hideVariablePlace( document.getElementById( \'hint\' ) );">#</span>] <span class="link" title="Задать вариант(ы)" onclick="showVariantForm();">Вариант(ы)</span> № <span id="variants"></span>';
		if( parent.length != 0 ) {
			span.children[ 0 ].style.display = 'inline';
		}
		if( document.getElementById( 'hint' ).getAttribute( 'link' ) ) {
			span.children[ 0 ].children[ 1 ].style.display = 'inline';
		}
	}
	document.getElementById( 'variants' ).innerHTML = '';
	document.getElementById( 'contentTask' ).style.display = 'none';
	div.innerHTML = '<h6>Введите номер варианта <br>по журналу</h6><br><form onsubmit="showTasks(); return false;"><input><input type="submit" value="Найти"></form>';
	div.style.display = 'block';
	div.lastChild.children[ 0 ].value = '';
	div.lastChild.children[ 0 ].focus();
}

function show_hideVariablePlace( div ) {
	if( div.getElementsByTagName( 'style' ).length != 0 ) {
		div.removeChild( div.lastChild );
	} else {
		div.innerHTML += '<style>#contentTask span.variants > span { border-bottom: none; }</style>';
	}
}

function showTasks() {
	var divForm = document.getElementById( 'variantForm' ), i, span = document.getElementById( 'variants' ), variants;

	span.innerHTML = '';
	variants = divForm.lastChild.children[ 0 ].value.replace( /\b0+\b/g, '' ).match( /\b\d+\b/g );
	if( variants ) {
		for( i = 0; i < variants.length; i++ ) {
			span.innerHTML += '<span class="link" onclick="setVariant( this );">'+ variants[ i ] +'</span>, ';
		}
		span.innerHTML = span.innerHTML.replace( /, $/, '' );
		span.firstChild.className = 'active';
		span.firstChild.innerHTML += ' &darr;';
		divForm.style.display = 'none';
		document.getElementById( 'contentTask' ).style.display = 'block';
		clearTasks( document.getElementById( 'contentTask' ).getElementsByTagName( 'span' ) );
		setTasks( span.firstChild.innerHTML.match( /\d+/ ) );
	} else {
		alert( 'Неправильно задан номер варианта!\n\nПодсказка:\n\tномер варианта - это положительное число' );
		divForm.lastChild.children[ 0 ].value = '';
	}
}

function setVariant( span ) {
	var i, spanParent = span.parentNode;

	for( i = 0; i < spanParent.children.length; i++ ) {
		if( spanParent.children[ i ].className == 'active' ) {
			spanParent.children[ i ].className = 'link';
			spanParent.children[ i ].innerHTML = spanParent.children[ i ].innerHTML.match( /\d+/ );
			break;
		}
	}
	span.className = 'active';
	span.innerHTML += ' &darr;';
	clearTasks( document.getElementById( 'contentTask' ).getElementsByTagName( 'span' ) );
	setTasks( span.innerHTML.match( /\d+/ ) );
}

function setTasks( number ) {
	var i, shift = 15, span = document.getElementById( 'contentTask' ).getElementsByTagName( 'span' );

	for( i = 0; i < span.length; i++ ) {
		if( span[ i ].className == 'variants' ) {
			span[ i ].children[ ( number - 1 + shift ) % span[ i ].children.length ].style.display = 'inline';
		}
	}
}

function clearTasks( span ) {
	var i, j;

	for( i = 0; i < span.length; i++ ) {
		if( span[ i ].className == 'variants' ) {
			for( j = 0; j < span[ i ].children.length; j++ ) {
				span[ i ].children[ j ].style.display = '';
			}
		}
	}
}
