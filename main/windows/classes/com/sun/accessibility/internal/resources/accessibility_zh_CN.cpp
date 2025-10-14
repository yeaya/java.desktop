#include <com/sun/accessibility/internal/resources/accessibility_zh_CN.h>

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

$MethodInfo _accessibility_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_zh_CN::*)()>(&accessibility_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_zh_CN_MethodInfo_
};

$Object* allocate$accessibility_zh_CN($Class* clazz) {
	return $of($alloc(accessibility_zh_CN));
}

void accessibility_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_zh_CN::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"\u6d3b\u52a8"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"\u9884\u8b66"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"\u5f85\u547d"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT \u7ec4\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"\u5fd9"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"\u753b\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"\u590d\u9009\u6846"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"\u5df2\u9009\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"\u5b50\u8282\u70b9"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"\u5df2\u6536\u7f29"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"\u989c\u8272\u9009\u62e9\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"\u5217\u6807\u9898"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"\u7ec4\u5408\u6846"_s)
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
			$of(u"\u684c\u9762\u56fe\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"\u684c\u9762\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"\u5bf9\u8bdd"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"\u76ee\u5f55\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"\u53ef\u7f16\u8f91"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"\u7f16\u8f91\u680f"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"\u5d4c\u5165\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"\u5d4c\u5165\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"\u542f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"\u53ef\u5c55\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"\u5df2\u5c55\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"\u6587\u4ef6\u9009\u62e9\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"\u6f0f\u6597"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"\u6d41\u81ea"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"\u6d41\u5411"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"\u53ef\u96c6\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"\u5df2\u96c6\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"\u9875\u811a"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"\u6846\u67b6"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"\u73bb\u7483\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"\u9875\u7709"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"\u6c34\u5e73"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTML \u5bb9\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"\u56fe\u6807\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"\u4e0d\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"\u5185\u90e8\u6846\u67b6"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"\u6807\u7b7e"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"\u6807\u7b7e\u5c5e\u4e8e"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"\u6807\u7b7e\u5236\u4f5c\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"\u5206\u5c42\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"\u5217\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"\u5217\u8868\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"\u7ba1\u7406\u5b50\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"\u5c5e\u4e8e"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"\u83dc\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"\u83dc\u5355\u680f"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"\u83dc\u5355\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"\u6a21\u6001"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"\u591a\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"\u591a\u9009\u62e9"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"\u4e0d\u900f\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"\u9009\u9879\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"\u9875\u6807\u7b7e"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"\u9875\u6807\u7b7e\u5217\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"\u9762\u677f"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"\u6bb5\u843d"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"\u7236\u7a97\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"\u53e3\u4ee4\u6587\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"\u5f39\u51fa\u5f0f\u83dc\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"\u5df2\u6309\u4e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"\u8fdb\u5ea6\u76d1\u89c6\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"\u8fdb\u5ea6\u680f"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"\u6309\u94ae"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"\u5355\u9009\u6309\u94ae"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"\u53ef\u8c03\u6574\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"\u6839\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"\u884c\u6807\u9898"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"\u6807\u5c3a"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"\u6eda\u52a8\u6761"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"\u6eda\u52a8\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"\u53ef\u9009\u62e9"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"\u6240\u9009"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"\u5206\u9694\u6761"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"\u6b63\u5728\u663e\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"\u5355\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"\u6ed1\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"\u62c6\u5206\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"\u5b50\u7a97\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"\u65cb\u8f6c\u7ec4\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"\u6587\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"\u5207\u6362\u6309\u94ae"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"\u5207\u6362\u5c55\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"\u5de5\u5177\u680f"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"\u5de5\u5177\u63d0\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"\u77ac\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"\u6811"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"\u5df2\u622a\u65ad"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"\u672a\u77e5"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"\u5782\u76f4"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"\u89c6\u7a97"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"\u53ef\u89c1"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"\u7a97\u53e3"_s)
		})
	});
}

accessibility_zh_CN::accessibility_zh_CN() {
}

$Class* accessibility_zh_CN::load$($String* name, bool initialize) {
	$loadClass(accessibility_zh_CN, name, initialize, &_accessibility_zh_CN_ClassInfo_, allocate$accessibility_zh_CN);
	return class$;
}

$Class* accessibility_zh_CN::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com