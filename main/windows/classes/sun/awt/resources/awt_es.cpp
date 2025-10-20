#include <sun/awt/resources/awt_es.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_es::*)()>(&awt_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_es_MethodInfo_
};

$Object* allocate$awt_es($Class* clazz) {
	return $of($alloc(awt_es));
}

void awt_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of("Ventana de Entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of("Cursor de Punto de Mira"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of("Cursor Por defecto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of("Cursor de Arrastrar Por defecto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of("Cursor de Soltar Por Defecto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of("Cursor de No Arrastrar Por Defecto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o este"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of("Cursor de Mano"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"M\u00e9todos de Entrada del Sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"Puede que las operaciones textuales no funcionen correctamente debido a un juego incoherente de bibliotecas de enlaces din\u00e1micos (DLL) instaladas en su sistema. Para obtener m\u00e1s informaci\u00f3n acerca de este problema y de la soluci\u00f3n alternativa sugerida, consulte Java(TM) 2 SDK, Standard Edition Release Notes en java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of("No se ha podido crear {0}. Motivo: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"Japon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of("Coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of("chino"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of("Chino Simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of("Chino Tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"Seleccionar M\u00e9todo de Entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Menor que"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of("Cursor de Movimiento"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Nordeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Noroeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Sudeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Suroeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of("Cursor de Texto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"Cursor de Cambio de Tama\u00f1o Oeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of("Cursor de Espera"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Aceptar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of(u"+ de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of("Repetir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Todos los Candidatos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"Alfanum\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of("Alt Gr"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("Ampersand"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisco"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("Arroba"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Comilla Invertida"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Barra Invertida"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Retroceso"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Inicio"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Llave de Apertura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Llave de Cierre"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Cancelar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of(u"Bloqueo de May\u00fasculas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Circunflejo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Borrar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"Par\u00e9ntesis de Cierre"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"Entrada de C\u00f3digo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Dos puntos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Coma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Componer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"Men\u00fa Contextual"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Convertir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Copiar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Cortar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Punto Superior (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of(u"C\u00edrculo Superior (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Acento Agudo Muerto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Acento Breve (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Acento Articircunflejo (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Cedilla (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Circunflejo (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of(u"Di\u00e9resis (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Acento Agudo Doble (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Acento Grave (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Iota (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of(u"Macr\u00f3n (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of(u"Esp\u00edritu \u00c1spero (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Sonido Semisonoro (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Tilde (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Sonido Sonoro (Tecla Muerta)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of(u". de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Suprimir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of(u"/ de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of(u"D\u00f3lar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Abajo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("Fin"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Intro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Igual"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Escape"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"Signo de Exclamaci\u00f3n de Cierre"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f1"_s),
			$of("F1"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f10"_s),
			$of("F10"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f11"_s),
			$of("F11"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f12"_s),
			$of("F12"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f13"_s),
			$of("F13"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f14"_s),
			$of("F14"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f15"_s),
			$of("F15"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f16"_s),
			$of("F16"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f17"_s),
			$of("F17"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f18"_s),
			$of("F18"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f19"_s),
			$of("F19"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f2"_s),
			$of("F2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f20"_s),
			$of("F20"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f21"_s),
			$of("F21"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f22"_s),
			$of("F22"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f23"_s),
			$of("F23"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f24"_s),
			$of("F24"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f3"_s),
			$of("F3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f4"_s),
			$of("F4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f5"_s),
			$of("F5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f6"_s),
			$of("F6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f7"_s),
			$of("F7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f8"_s),
			$of("F8"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f9"_s),
			$of("F9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.final"_s),
			$of("Final"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of("Buscar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Anchura Completa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of("Mayor que"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Media Anchura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Ayuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Inicio"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"Activar/Desactivar M\u00e9todo de Entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insertar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"Signo de Exclamaci\u00f3n de Apertura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of("Caracteres Hiragana Japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of("Caracteres Katakana Japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of("Caracteres Romanos Japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Bloqueo Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of("Kanji"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of("Izquierda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"Par\u00e9ntesis Izquierdo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Menos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of("Cambio de Modo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of(u"* de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of("No Convertir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of(u"Bloqueo Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"Signo de N\u00famero"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of(u"Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"Par\u00e9ntesis de Apertura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of("Pegar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pausa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Punto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of(u"AvP\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of(u"ReP\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of(u"M\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of("Candidato Anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Imprimir Pantalla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Propiedades"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Comilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Dobles Comillas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Derecha"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"Par\u00e9ntesis Derecho"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of("Caracteres Romanos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Bloqueo de Desplazamiento"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Punto y coma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of(u", de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of(u", de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of(u"May\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Barra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Espacio"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of("Parar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of(u"- de Teclado Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tabulador"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of("No Definido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Subrayado"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of("Deshacer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of("Desconocido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Arriba"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.windows"_s),
			$of("Windows"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.def.delay"_s),
			$of("30"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im.style"_s),
			$of("en el lugar"_s)
		})
	});
}

awt_es::awt_es() {
}

$Class* awt_es::load$($String* name, bool initialize) {
	$loadClass(awt_es, name, initialize, &_awt_es_ClassInfo_, allocate$awt_es);
	return class$;
}

$Class* awt_es::class$ = nullptr;

		} // resources
	} // awt
} // sun