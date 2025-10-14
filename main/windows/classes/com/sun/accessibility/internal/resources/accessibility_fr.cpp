#include <com/sun/accessibility/internal/resources/accessibility_fr.h>

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

$MethodInfo _accessibility_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_fr::*)()>(&accessibility_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_fr_MethodInfo_
};

$Object* allocate$accessibility_fr($Class* clazz) {
	return $of($alloc(accessibility_fr));
}

void accessibility_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_fr::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("actif"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("alerte"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"arm\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("composant AWT"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"occup\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("canevas"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"case \u00e0 cocher"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"coch\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("noeud enfant de"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"r\u00e9duit"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"s\u00e9lecteur de couleurs"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"en-t\u00eate de colonne"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"liste d\u00e9roulante"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of(u"contr\u00f4l\u00e9 par"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of(u"contr\u00f4leur pour"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"ic\u00f4ne de bureau"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("panneau de bureau"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"bo\u00eete de dialogue"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"panneau de r\u00e9pertoires"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("modifiable"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"barre d\'\u00e9dition"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"incorpor\u00e9 par"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("incorpore"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"activ\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("extensible"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"d\u00e9velopp\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"s\u00e9lecteur de fichiers"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"\u00e9l\u00e9ment de remplissage"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("flux depuis"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("flux vers"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"zone d\'entr\u00e9e possible"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"avec zone d\'entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of("pied de page"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("cadre"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("panneau de grossissement"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"en-t\u00eate"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("conteneur HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"r\u00e9duit \u00e0 une ic\u00f4ne"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"ind\u00e9termin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("cadre interne"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"libell\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"libell\u00e9 de"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"libell\u00e9 par"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"panneau superpos\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("liste"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"\u00e9l\u00e9ment de liste"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"g\u00e8re les descendants"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("membre de"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("barre de menus"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("option de menu"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("ligne multiple"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"multis\u00e9lectionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("opaque"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("panneau d\'options"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("onglet de page"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("liste d\'onglets de page"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("panneau"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of("paragraphe"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"fen\u00eatre parente de"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("texte de mot de passe"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("menu contextuel"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"enfonc\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"contr\u00f4le de la progression"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("barre de progression"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of("bouton"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("bouton radio"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("redimensionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("panneau racine"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"en-t\u00eate de ligne"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"r\u00e8gle"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"barre de d\u00e9filement"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"panneau de d\u00e9filement"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"s\u00e9lectionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"s\u00e9lectionn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"s\u00e9parateur"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("montrant"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("ligne unique"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("curseur"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"panneau divis\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"sous-fen\u00eatre de"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("composant Swing"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tableau"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("texte"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of("bouton de basculement"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"activer/d\u00e9sactiver d\u00e9veloppement"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("barre d\'outils"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("info-bulle"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("non persistant"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of("arborescence"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"tronqu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("lucarne"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("visible"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"fen\u00eatre"_s)
		})
	});
}

accessibility_fr::accessibility_fr() {
}

$Class* accessibility_fr::load$($String* name, bool initialize) {
	$loadClass(accessibility_fr, name, initialize, &_accessibility_fr_ClassInfo_, allocate$accessibility_fr);
	return class$;
}

$Class* accessibility_fr::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com