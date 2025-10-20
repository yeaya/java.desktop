#include <com/sun/accessibility/internal/resources/accessibility_ko.h>

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

$MethodInfo _accessibility_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_ko::*)()>(&accessibility_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_ko_MethodInfo_
};

$Object* allocate$accessibility_ko($Class* clazz) {
	return $of($alloc(accessibility_ko));
}

void accessibility_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"\ud65c\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"\uacbd\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"\ud06c\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT \uad6c\uc131\uc694\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"\uc0ac\uc6a9 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"\uce94\ubc84\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"\uccb4\ud06c\ubc15\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"\uc120\ud0dd\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"\ud558\uc704 \ub178\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"\ucd95\uc18c\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"\uc0c9\uc0c1 \uc120\ud0dd\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"\uc5f4 \uba38\ub9ac\uae00"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"\ucf64\ubcf4 \uc0c1\uc790"_s)
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
			$of(u"\ubc14\ud0d5\ud654\uba74 \uc544\uc774\ucf58"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"\ubc14\ud0d5\ud654\uba74 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"\ub300\ud654\uc0c1\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"\ub514\ub809\ud1a0\ub9ac \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"\ud3b8\uc9d1 \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"\ud3b8\uc9d1 \ub3c4\uad6c"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"\ud3ec\ud568 \uc8fc\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"\ud3ec\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"\uc0ac\uc6a9"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"\ud655\uc7a5 \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"\ud655\uc7a5\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"\ud30c\uc77c \uc120\ud0dd\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"\ud544\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"\ud750\ub984 \ucd9c\ucc98"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"\ud750\ub984 \ub300\uc0c1"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"\ud3ec\ucee4\uc2a4 \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"\ud3ec\ucee4\uc2a4\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"\ubc14\ub2e5\uae00"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"\ud504\ub808\uc784"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"\uae00\ub798\uc2a4 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"\uba38\ub9ac\uae00"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"\uac00\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTML \ucee8\ud14c\uc774\ub108"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"\uc544\uc774\ucf58\ud654\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"\ud655\uc815\ub418\uc9c0 \uc54a\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"\ub0b4\ubd80 \ud504\ub808\uc784"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"\ub808\uc774\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"\ub808\uc774\ube14 \ub300\uc0c1"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"\ub808\uc774\ube14 \uc9c0\uc815\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"\uacc4\uce35\uc801 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"\ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"\ubaa9\ub85d \ud56d\ubaa9"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"\uc885\uc18d \ud56d\ubaa9 \uad00\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"\uc18c\uc18d \uadf8\ub8f9"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"\uba54\ub274"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"\uba54\ub274 \ud45c\uc2dc\uc904"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"\uba54\ub274 \ud56d\ubaa9"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"\ubaa8\ub2ec"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"\ubcf5\uc218 \ud589"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"\ub2e4\uc911 \uc120\ud0dd \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"\ubd88\ud22c\uba85"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"\uc635\uc158 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"\ud398\uc774\uc9c0 \ud0ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"\ud398\uc774\uc9c0 \ud0ed \ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"\ud328\ub110"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"\ub2e8\ub77d"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"\uc0c1\uc704 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"\ube44\ubc00\ubc88\ud638 \ud14d\uc2a4\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"\ud31d\uc5c5 \uba54\ub274"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"\ub204\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"\uc9c4\ud589 \ubaa8\ub2c8\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"\uc9c4\ud589 \ub9c9\ub300"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"\ub204\ub984 \ub2e8\ucd94"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"\ub77c\ub514\uc624 \ub2e8\ucd94"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"\ud06c\uae30 \uc870\uc815 \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"\ub8e8\ud2b8 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"\ud589 \uba38\ub9ac\uae00"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"\ub208\uae08\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"\uc2a4\ud06c\ub864 \ub9c9\ub300"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"\uc2a4\ud06c\ub864 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"\uc120\ud0dd \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"\uc120\ud0dd\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"\uad6c\ubd84 \uae30\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"\ud45c\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"\ud55c \uc904"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"\uc2ac\ub77c\uc774\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"\ubd84\ud560 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"\ud558\uc704 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"\ud68c\uc804 \uad6c\uc131\uc694\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"\ud14c\uc774\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"\ud14d\uc2a4\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"\ud1a0\uae00 \ub2e8\ucd94"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"\ud1a0\uae00 \ud655\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"\ub3c4\uad6c \ubaa8\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"\ub3c4\uad6c \uc124\uba85"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"\uc77c\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"\ud2b8\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"\uc798\ub9bc"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"\uc54c \uc218 \uc5c6\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"\uc138\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"\ubdf0\ud3ec\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"\ud45c\uc2dc \uac00\ub2a5"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"\ucc3d"_s)
		})
	});
}

accessibility_ko::accessibility_ko() {
}

$Class* accessibility_ko::load$($String* name, bool initialize) {
	$loadClass(accessibility_ko, name, initialize, &_accessibility_ko_ClassInfo_, allocate$accessibility_ko);
	return class$;
}

$Class* accessibility_ko::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com