#include <com/sun/accessibility/internal/resources/accessibility_zh_HK.h>

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

$MethodInfo _accessibility_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_zh_HK::*)()>(&accessibility_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_zh_HK_MethodInfo_
};

$Object* allocate$accessibility_zh_HK($Class* clazz) {
	return $of($alloc(accessibility_zh_HK));
}

void accessibility_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_zh_HK::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"\u4f5c\u7528\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"\u8b66\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"\u5df2\u914d\u5099"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT \u5143\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"\u5fd9\u788c\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"\u756b\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"\u6838\u53d6\u65b9\u584a"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"\u5df2\u6838\u9078"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"\u5b50\u7bc0\u9ede"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"\u5df2\u6536\u7e2e"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"\u8272\u5f69\u9078\u64c7\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"\u76f4\u6b04\u6a19\u984c"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"\u4e0b\u62c9\u5f0f\u6e05\u55ae\u65b9\u584a"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of(u"\u63a7\u5236\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of(u"\u63a7\u5236\u5c0d\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"\u684c\u9762\u5716\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"\u684c\u9762\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"\u5c0d\u8a71\u65b9\u584a"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"\u76ee\u9304\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"\u53ef\u7de8\u8f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"\u7de8\u8f2f\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"\u5167\u5d4c\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"\u5167\u5d4c"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"\u5df2\u555f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"\u53ef\u64f4\u5c55"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"\u5df2\u64f4\u5c55"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"\u6a94\u6848\u9078\u64c7\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"\u586b\u5145\u7269"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"\u6d41\u52d5\u81ea"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"\u6d41\u52d5\u81f3"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"\u53ef\u805a\u7126"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"\u5df2\u805a\u7126"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"\u9801\u5c3e"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"\u6846\u67b6"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"\u6aa2\u8996\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"\u9801\u9996"_s)
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
			$of(u"\u5df2\u5716\u793a\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"\u4e0d\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"\u5167\u90e8\u6846\u67b6"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"\u6a19\u7c64"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"\u6a19\u793a\u5c0d\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"\u6a19\u793a\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"\u5206\u5c64\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"\u6e05\u55ae\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"\u7ba1\u7406\u5b50\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"\u6240\u5c6c\u6210\u54e1"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"\u529f\u80fd\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"\u529f\u80fd\u8868\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"\u529f\u80fd\u8868\u9805\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"\u6a21\u614b"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"\u591a\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"\u53ef\u591a\u91cd\u9078\u53d6"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"\u4e0d\u900f\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"\u9078\u9805\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"\u9801\u9762\u9801\u7c64"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"\u9801\u9762\u9801\u7c64\u6e05\u55ae"_s)
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
			$of(u"\u7236\u7cfb\u8996\u7a97"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"\u5bc6\u78bc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"\u5373\u73fe\u5f0f\u529f\u80fd\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"\u5df2\u6309\u4e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"\u9032\u5ea6\u76e3\u8996\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"\u9032\u5ea6\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"\u4e0b\u58d3\u6309\u9215"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"\u5713\u9215"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"\u53ef\u8abf\u6574\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"root \u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"\u5217\u6a19\u984c"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"\u5c3a\u898f"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"\u6372\u8ef8"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"\u6372\u52d5\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"\u53ef\u9078\u53d6"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"\u5df2\u9078\u53d6"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"\u5206\u9694\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"\u986f\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"\u55ae\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"\u6ed1\u52d5\u8ef8"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"\u5206\u5272\u7a97\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"\u5b50\u8996\u7a97"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"Swing \u5143\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"\u8868\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"\u5207\u63db\u6309\u9215"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"\u5207\u63db\u64f4\u5c55"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"\u5de5\u5177\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"\u5de5\u5177\u63d0\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"\u66ab\u6642\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"\u6a39\u72c0\u7d50\u69cb"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"\u5df2\u622a\u65b7"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"\u4e0d\u660e\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"\u5782\u76f4"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"\u6aa2\u8996\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"\u53ef\u898b\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"\u8996\u7a97"_s)
		})
	});
}

accessibility_zh_HK::accessibility_zh_HK() {
}

$Class* accessibility_zh_HK::load$($String* name, bool initialize) {
	$loadClass(accessibility_zh_HK, name, initialize, &_accessibility_zh_HK_ClassInfo_, allocate$accessibility_zh_HK);
	return class$;
}

$Class* accessibility_zh_HK::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com