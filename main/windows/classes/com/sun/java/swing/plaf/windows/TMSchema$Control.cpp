#include <com/sun/java/swing/plaf/windows/TMSchema$Control.h>

#include <com/sun/java/swing/plaf/windows/TMSchema.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BUTTON
#undef COMBOBOX
#undef EDIT
#undef HEADER
#undef LISTBOX
#undef LISTVIEW
#undef MENU
#undef PROGRESS
#undef REBAR
#undef SCROLLBAR
#undef SPIN
#undef TAB
#undef TOOLBAR
#undef TRACKBAR
#undef TREEVIEW
#undef WINDOW

using $TMSchema$ControlArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$Control>;
using $TMSchema = ::com::sun::java::swing::plaf::windows::TMSchema;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _TMSchema$Control_FieldInfo_[] = {
	{"BUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, BUTTON)},
	{"COMBOBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, COMBOBOX)},
	{"EDIT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, EDIT)},
	{"HEADER", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, HEADER)},
	{"LISTBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, LISTBOX)},
	{"LISTVIEW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, LISTVIEW)},
	{"MENU", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, MENU)},
	{"PROGRESS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, PROGRESS)},
	{"REBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, REBAR)},
	{"SCROLLBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, SCROLLBAR)},
	{"SPIN", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, SPIN)},
	{"TAB", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, TAB)},
	{"TOOLBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, TOOLBAR)},
	{"TRACKBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, TRACKBAR)},
	{"TREEVIEW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, TREEVIEW)},
	{"WINDOW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Control, WINDOW)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TMSchema$Control, $VALUES)},
	{}
};

$MethodInfo _TMSchema$Control_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TMSchema$ControlArray*(*)()>(&TMSchema$Control::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TMSchema$Control::*)($String*,int32_t)>(&TMSchema$Control::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TMSchema$Control*(*)($String*)>(&TMSchema$Control::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TMSchema$ControlArray*(*)()>(&TMSchema$Control::values))},
	{}
};

$InnerClassInfo _TMSchema$Control_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$Control", "com.sun.java.swing.plaf.windows.TMSchema", "Control", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema$Control_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.windows.TMSchema$Control",
	"java.lang.Enum",
	nullptr,
	_TMSchema$Control_FieldInfo_,
	_TMSchema$Control_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/windows/TMSchema$Control;>;",
	nullptr,
	_TMSchema$Control_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema"
};

$Object* allocate$TMSchema$Control($Class* clazz) {
	return $of($alloc(TMSchema$Control));
}

TMSchema$Control* TMSchema$Control::BUTTON = nullptr;
TMSchema$Control* TMSchema$Control::COMBOBOX = nullptr;
TMSchema$Control* TMSchema$Control::EDIT = nullptr;
TMSchema$Control* TMSchema$Control::HEADER = nullptr;
TMSchema$Control* TMSchema$Control::LISTBOX = nullptr;
TMSchema$Control* TMSchema$Control::LISTVIEW = nullptr;
TMSchema$Control* TMSchema$Control::MENU = nullptr;
TMSchema$Control* TMSchema$Control::PROGRESS = nullptr;
TMSchema$Control* TMSchema$Control::REBAR = nullptr;
TMSchema$Control* TMSchema$Control::SCROLLBAR = nullptr;
TMSchema$Control* TMSchema$Control::SPIN = nullptr;
TMSchema$Control* TMSchema$Control::TAB = nullptr;
TMSchema$Control* TMSchema$Control::TOOLBAR = nullptr;
TMSchema$Control* TMSchema$Control::TRACKBAR = nullptr;
TMSchema$Control* TMSchema$Control::TREEVIEW = nullptr;
TMSchema$Control* TMSchema$Control::WINDOW = nullptr;
$TMSchema$ControlArray* TMSchema$Control::$VALUES = nullptr;

$TMSchema$ControlArray* TMSchema$Control::$values() {
	$init(TMSchema$Control);
	return $new($TMSchema$ControlArray, {
		TMSchema$Control::BUTTON,
		TMSchema$Control::COMBOBOX,
		TMSchema$Control::EDIT,
		TMSchema$Control::HEADER,
		TMSchema$Control::LISTBOX,
		TMSchema$Control::LISTVIEW,
		TMSchema$Control::MENU,
		TMSchema$Control::PROGRESS,
		TMSchema$Control::REBAR,
		TMSchema$Control::SCROLLBAR,
		TMSchema$Control::SPIN,
		TMSchema$Control::TAB,
		TMSchema$Control::TOOLBAR,
		TMSchema$Control::TRACKBAR,
		TMSchema$Control::TREEVIEW,
		TMSchema$Control::WINDOW
	});
}

$TMSchema$ControlArray* TMSchema$Control::values() {
	$init(TMSchema$Control);
	return $cast($TMSchema$ControlArray, TMSchema$Control::$VALUES->clone());
}

TMSchema$Control* TMSchema$Control::valueOf($String* name) {
	$init(TMSchema$Control);
	return $cast(TMSchema$Control, $Enum::valueOf(TMSchema$Control::class$, name));
}

void TMSchema$Control::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TMSchema$Control($Class* class$) {
	$assignStatic(TMSchema$Control::BUTTON, $new(TMSchema$Control, "BUTTON"_s, 0));
	$assignStatic(TMSchema$Control::COMBOBOX, $new(TMSchema$Control, "COMBOBOX"_s, 1));
	$assignStatic(TMSchema$Control::EDIT, $new(TMSchema$Control, "EDIT"_s, 2));
	$assignStatic(TMSchema$Control::HEADER, $new(TMSchema$Control, "HEADER"_s, 3));
	$assignStatic(TMSchema$Control::LISTBOX, $new(TMSchema$Control, "LISTBOX"_s, 4));
	$assignStatic(TMSchema$Control::LISTVIEW, $new(TMSchema$Control, "LISTVIEW"_s, 5));
	$assignStatic(TMSchema$Control::MENU, $new(TMSchema$Control, "MENU"_s, 6));
	$assignStatic(TMSchema$Control::PROGRESS, $new(TMSchema$Control, "PROGRESS"_s, 7));
	$assignStatic(TMSchema$Control::REBAR, $new(TMSchema$Control, "REBAR"_s, 8));
	$assignStatic(TMSchema$Control::SCROLLBAR, $new(TMSchema$Control, "SCROLLBAR"_s, 9));
	$assignStatic(TMSchema$Control::SPIN, $new(TMSchema$Control, "SPIN"_s, 10));
	$assignStatic(TMSchema$Control::TAB, $new(TMSchema$Control, "TAB"_s, 11));
	$assignStatic(TMSchema$Control::TOOLBAR, $new(TMSchema$Control, "TOOLBAR"_s, 12));
	$assignStatic(TMSchema$Control::TRACKBAR, $new(TMSchema$Control, "TRACKBAR"_s, 13));
	$assignStatic(TMSchema$Control::TREEVIEW, $new(TMSchema$Control, "TREEVIEW"_s, 14));
	$assignStatic(TMSchema$Control::WINDOW, $new(TMSchema$Control, "WINDOW"_s, 15));
	$assignStatic(TMSchema$Control::$VALUES, TMSchema$Control::$values());
}

TMSchema$Control::TMSchema$Control() {
}

$Class* TMSchema$Control::load$($String* name, bool initialize) {
	$loadClass(TMSchema$Control, name, initialize, &_TMSchema$Control_ClassInfo_, clinit$TMSchema$Control, allocate$TMSchema$Control);
	return class$;
}

$Class* TMSchema$Control::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com