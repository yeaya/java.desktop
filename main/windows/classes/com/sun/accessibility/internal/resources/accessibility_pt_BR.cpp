#include <com/sun/accessibility/internal/resources/accessibility_pt_BR.h>

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

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

$MethodInfo _accessibility_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_pt_BR::*)()>(&accessibility_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_pt_BR_MethodInfo_
};

$Object* allocate$accessibility_pt_BR($Class* clazz) {
	return $of($alloc(accessibility_pt_BR));
}

void accessibility_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("ativo"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("alerta"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("armado"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("componente AWT"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("ocupado"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("tela"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"caixa de sele\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("selecionado"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"n\u00f3 filho de"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"contra\u00eddo"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of("seletor de cores"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"cabe\u00e7alho da coluna"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"caixa de combina\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of("controlledBy"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of("controllerFor"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"\u00edcone da \u00e1rea de trabalho"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"painel da \u00e1rea de trabalho"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"caixa de di\u00e1logo"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"painel do diret\u00f3rio"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"edit\u00e1vel"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"barra de edi\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("integrado por"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("integra"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("ativado"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"expans\u00edvel"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of("expandido"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of("seletor de arquivos"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of("preenchedor"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("fluxos de"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("fluxos para"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"focaliz\u00e1vel"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("focalizado"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"rodap\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("quadro"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("painel transparente"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"cabe\u00e7alho"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("Container de HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("iconizado"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of("indeterminado"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("quadro interno"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"r\u00f3tulo"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"r\u00f3tulo de"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("rotulado por"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("painel em camadas"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("lista"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("item da lista"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of("gerencia descendentes"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("membro de"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("barra de menus"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("item do menu"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"v\u00e1rias linhas"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"m\u00faltipla escolha"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("opaco"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"painel de op\u00e7\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"guia da p\u00e1gina"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"lista de guias da p\u00e1gina"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("painel"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"par\u00e1grafo"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of("janela pai de"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("texto da senha"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("menu pop-up"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of("pressionado"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of("monitor de progresso"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("barra de progresso"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"bot\u00e3o de a\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"bot\u00e3o de op\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"redimension\u00e1vel"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("painel base"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"cabe\u00e7alho da linha"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"r\u00e9gua"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("barra de rolagem"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("painel de rolagem"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"selecion\u00e1vel"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of("selecionado"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("separador"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("mostrando"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"linha \u00fanica"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("controle deslizante"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of("painel dividido"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("subjanela de"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("componente swing"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tabela"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("texto"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"bot\u00e3o de altern\u00e2ncia"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of("alternar expandir"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("barra de ferramentas"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("dica de ferramenta"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"transit\u00f3rio"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"\u00e1rvore"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of("truncado"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("desconhecido"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"janela de visualiza\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"vis\u00edvel"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of("janela"_s)
		})
	});
}

accessibility_pt_BR::accessibility_pt_BR() {
}

$Class* accessibility_pt_BR::load$($String* name, bool initialize) {
	$loadClass(accessibility_pt_BR, name, initialize, &_accessibility_pt_BR_ClassInfo_, allocate$accessibility_pt_BR);
	return class$;
}

$Class* accessibility_pt_BR::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com