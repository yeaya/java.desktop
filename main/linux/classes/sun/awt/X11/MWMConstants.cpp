#include <sun/awt/X11/MWMConstants.h>

#include <jcpp.h>

#undef MWM_DECOR_ALL
#undef MWM_DECOR_BORDER
#undef MWM_DECOR_MAXIMIZE
#undef MWM_DECOR_MENU
#undef MWM_DECOR_MINIMIZE
#undef MWM_DECOR_RESIZEH
#undef MWM_DECOR_TITLE
#undef MWM_FUNC_ALL
#undef MWM_FUNC_CLOSE
#undef MWM_FUNC_MAXIMIZE
#undef MWM_FUNC_MINIMIZE
#undef MWM_FUNC_MOVE
#undef MWM_FUNC_RESIZE
#undef MWM_HINTS_ATOM_NAME
#undef MWM_HINTS_DECORATIONS
#undef MWM_HINTS_FUNCTIONS
#undef MWM_HINTS_INPUT_MODE
#undef MWM_HINTS_STATUS
#undef MWM_INPUT_FULL_APPLICATION_MODAL
#undef MWM_INPUT_MODELESS
#undef MWM_INPUT_PRIMARY_APPLICATION_MODAL
#undef MWM_INPUT_SYSTEM_MODAL
#undef PROP_MOTIF_WM_INFO_ELEMENTS
#undef PROP_MWM_HINTS_ELEMENTS
#undef PROP_MWM_INFO_ELEMENTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _MWMConstants_FieldInfo_[] = {
	{"MWM_HINTS_FUNCTIONS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_HINTS_FUNCTIONS)},
	{"MWM_HINTS_DECORATIONS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_HINTS_DECORATIONS)},
	{"MWM_HINTS_INPUT_MODE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_HINTS_INPUT_MODE)},
	{"MWM_HINTS_STATUS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_HINTS_STATUS)},
	{"MWM_FUNC_ALL", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_ALL)},
	{"MWM_FUNC_RESIZE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_RESIZE)},
	{"MWM_FUNC_MOVE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_MOVE)},
	{"MWM_FUNC_MINIMIZE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_MINIMIZE)},
	{"MWM_FUNC_MAXIMIZE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_MAXIMIZE)},
	{"MWM_FUNC_CLOSE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_FUNC_CLOSE)},
	{"MWM_DECOR_ALL", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_ALL)},
	{"MWM_DECOR_BORDER", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_BORDER)},
	{"MWM_DECOR_RESIZEH", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_RESIZEH)},
	{"MWM_DECOR_TITLE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_TITLE)},
	{"MWM_DECOR_MENU", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_MENU)},
	{"MWM_DECOR_MINIMIZE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_MINIMIZE)},
	{"MWM_DECOR_MAXIMIZE", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_DECOR_MAXIMIZE)},
	{"MWM_INPUT_MODELESS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_INPUT_MODELESS)},
	{"MWM_INPUT_PRIMARY_APPLICATION_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_INPUT_PRIMARY_APPLICATION_MODAL)},
	{"MWM_INPUT_SYSTEM_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_INPUT_SYSTEM_MODAL)},
	{"MWM_INPUT_FULL_APPLICATION_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, MWM_INPUT_FULL_APPLICATION_MODAL)},
	{"PROP_MWM_HINTS_ELEMENTS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, PROP_MWM_HINTS_ELEMENTS)},
	{"PROP_MOTIF_WM_INFO_ELEMENTS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, PROP_MOTIF_WM_INFO_ELEMENTS)},
	{"PROP_MWM_INFO_ELEMENTS", "I", nullptr, $STATIC | $FINAL, $constField(MWMConstants, PROP_MWM_INFO_ELEMENTS)},
	{"MWM_HINTS_ATOM_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MWMConstants, MWM_HINTS_ATOM_NAME)},
	{}
};

$MethodInfo _MWMConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MWMConstants::*)()>(&MWMConstants::init$))},
	{}
};

$ClassInfo _MWMConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.MWMConstants",
	"java.lang.Object",
	nullptr,
	_MWMConstants_FieldInfo_,
	_MWMConstants_MethodInfo_
};

$Object* allocate$MWMConstants($Class* clazz) {
	return $of($alloc(MWMConstants));
}

$String* MWMConstants::MWM_HINTS_ATOM_NAME = nullptr;

void MWMConstants::init$() {
}

MWMConstants::MWMConstants() {
}

void clinit$MWMConstants($Class* class$) {
	$assignStatic(MWMConstants::MWM_HINTS_ATOM_NAME, "_MOTIF_WM_HINTS"_s);
}

$Class* MWMConstants::load$($String* name, bool initialize) {
	$loadClass(MWMConstants, name, initialize, &_MWMConstants_ClassInfo_, clinit$MWMConstants, allocate$MWMConstants);
	return class$;
}

$Class* MWMConstants::class$ = nullptr;

		} // X11
	} // awt
} // sun