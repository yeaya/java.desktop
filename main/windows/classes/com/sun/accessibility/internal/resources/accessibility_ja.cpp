#include <com/sun/accessibility/internal/resources/accessibility_ja.h>

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

$MethodInfo _accessibility_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_ja::*)()>(&accessibility_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_ja_MethodInfo_
};

$Object* allocate$accessibility_ja($Class* clazz) {
	return $of($alloc(accessibility_ja));
}

void accessibility_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"\u30a2\u30af\u30c6\u30a3\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"\u30a2\u30e9\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"\u4f5c\u52d5\u6e96\u5099\u5b8c\u4e86"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"\u30d3\u30b8\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"\u30ad\u30e3\u30f3\u30d0\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"\u30c1\u30a7\u30c3\u30af\u30fb\u30dc\u30c3\u30af\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"\u30c1\u30a7\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("child node of"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"\u77ed\u7e2e"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"\u30ab\u30e9\u30fc\u30fb\u30c1\u30e5\u30fc\u30b6"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"\u5217\u30d8\u30c3\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"\u30b3\u30f3\u30dc\u30fb\u30dc\u30c3\u30af\u30b9"_s)
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
			$of(u"\u30c7\u30b9\u30af\u30c8\u30c3\u30d7\u30fb\u30a2\u30a4\u30b3\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"\u30c7\u30b9\u30af\u30c8\u30c3\u30d7\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"\u30c0\u30a4\u30a2\u30ed\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"\u7de8\u96c6\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"\u7de8\u96c6\u30d0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("embedded by"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"\u57cb\u8fbc\u307f"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"\u6709\u52b9"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"\u5c55\u958b\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"\u5c55\u958b"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u30fb\u30c1\u30e5\u30fc\u30b6"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"\u30d5\u30a3\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("flows from"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("flows to"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"\u30d5\u30a9\u30fc\u30ab\u30b9\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"\u30d5\u30a9\u30fc\u30ab\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"\u30d5\u30c3\u30bf\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"\u30d5\u30ec\u30fc\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"\u30ac\u30e9\u30b9\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"\u30d8\u30c3\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"\u6c34\u5e73"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTML\u30b3\u30f3\u30c6\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"\u30a2\u30a4\u30b3\u30f3\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"\u4e0d\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"\u5185\u90e8\u30d5\u30ec\u30fc\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"\u30e9\u30d9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of("label for"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("labeled by"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"\u968e\u5c64\u5316\u3055\u308c\u305f\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"\u30ea\u30b9\u30c8\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"\u5b50\u5b6b\u3092\u7ba1\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("member of"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"\u30e1\u30cb\u30e5\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"\u30e1\u30cb\u30e5\u30fc\u30fb\u30d0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"\u30e1\u30cb\u30e5\u30fc\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"\u30e2\u30fc\u30c0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"\u8907\u6570\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"\u8907\u6570\u9078\u629e\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"\u4e0d\u900f\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"\u30da\u30fc\u30b8\u30fb\u30bf\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"\u30da\u30fc\u30b8\u30fb\u30bf\u30d6\u30fb\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"\u30d1\u30cd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"\u6bb5\u843d"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of("parent window of"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u30fb\u30c6\u30ad\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"\u30dd\u30c3\u30d7\u30a2\u30c3\u30d7\u30fb\u30e1\u30cb\u30e5\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"\u62bc\u4e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"\u9032\u6357\u30e2\u30cb\u30bf\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"\u9032\u6357\u30d0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"\u30d7\u30c3\u30b7\u30e5\u30fb\u30dc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"\u30e9\u30b8\u30aa\u30fb\u30dc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"\u30b5\u30a4\u30ba\u5909\u66f4\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"\u30eb\u30fc\u30c8\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"\u884c\u30d8\u30c3\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"\u30eb\u30fc\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"\u30b9\u30af\u30ed\u30fc\u30eb\u30fb\u30d0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"\u30b9\u30af\u30ed\u30fc\u30eb\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"\u9078\u629e\u53ef\u80fd"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"\u9078\u629e"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"\u30bb\u30d1\u30ec\u30fc\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"\u8868\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"\u5358\u4e00\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"\u30b9\u30e9\u30a4\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"\u5206\u5272\u533a\u753b"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("subwindow of"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"Swing\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"\u30c6\u30ad\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"\u30c8\u30b0\u30eb\u30fb\u30dc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"\u5c55\u958b\u306e\u30c8\u30b0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"\u30c4\u30fc\u30eb\u30d0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"\u30c4\u30fc\u30eb\u30c1\u30c3\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"\u4e00\u6642"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"\u30c4\u30ea\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"\u4e0d\u5b8c\u5168"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"\u4e0d\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"\u5782\u76f4"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"\u30d3\u30e5\u30fc\u30dd\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"\u53ef\u8996"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"\u30a6\u30a3\u30f3\u30c9\u30a6"_s)
		})
	});
}

accessibility_ja::accessibility_ja() {
}

$Class* accessibility_ja::load$($String* name, bool initialize) {
	$loadClass(accessibility_ja, name, initialize, &_accessibility_ja_ClassInfo_, allocate$accessibility_ja);
	return class$;
}

$Class* accessibility_ja::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com