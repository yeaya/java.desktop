#include <javax/accessibility/AccessibleResourceBundle.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace javax {
	namespace accessibility {

$CompoundAttribute _AccessibleResourceBundle_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _AccessibleResourceBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleResourceBundle::*)()>(&AccessibleResourceBundle::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessibleResourceBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleResourceBundle",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_AccessibleResourceBundle_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AccessibleResourceBundle_Annotations_
};

$Object* allocate$AccessibleResourceBundle($Class* clazz) {
	return $of($alloc(AccessibleResourceBundle));
}

void AccessibleResourceBundle::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AccessibleResourceBundle::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("alert"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("AWT component"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of("check box"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of("color chooser"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of("column header"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of("combo box"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("canvas"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of("desktop icon"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("desktop pane"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of("dialog"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of("directory pane"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("glass pane"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of("file chooser"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of("filler"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("frame"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("internal frame"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of("label"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("layered pane"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("list"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("list item"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("menu bar"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("menu item"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("option pane"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("page tab"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("page tab list"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("panel"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("password text"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("popup menu"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("progress bar"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of("push button"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("radio button"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("root pane"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of("row header"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("scroll bar"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("scroll pane"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("separator"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("slider"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of("split pane"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("swing component"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("table"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("text"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of("tree"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of("toggle button"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("tool bar"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("tool tip"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("unknown"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("viewport"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of("window"_s)
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
			$of("memberOf"_s),
			$of("member of"_s)
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
			$of("active"_s),
			$of("active"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("armed"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("busy"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("checked"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of("collapsed"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("editable"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("expandable"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of("expanded"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("enabled"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of("focusable"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("focused"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("iconified"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("multiple line"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of("multiselectable"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("opaque"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of("pressed"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("resizable"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of("selectable"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of("selected"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("showing"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("single line"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("transient"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("visible"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		})
	});
}

AccessibleResourceBundle::AccessibleResourceBundle() {
}

$Class* AccessibleResourceBundle::load$($String* name, bool initialize) {
	$loadClass(AccessibleResourceBundle, name, initialize, &_AccessibleResourceBundle_ClassInfo_, allocate$AccessibleResourceBundle);
	return class$;
}

$Class* AccessibleResourceBundle::class$ = nullptr;

	} // accessibility
} // javax