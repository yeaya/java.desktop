#include <sun/swing/FilePane$ViewTypeAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$ViewTypeAction_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$ViewTypeAction, this$0)},
	{"viewType", "I", nullptr, $PRIVATE, $field(FilePane$ViewTypeAction, viewType)},
	{}
};

$MethodInfo _FilePane$ViewTypeAction_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;I)V", nullptr, 0, $method(static_cast<void(FilePane$ViewTypeAction::*)($FilePane*,int32_t)>(&FilePane$ViewTypeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$ViewTypeAction_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$ViewTypeAction", "sun.swing.FilePane", "ViewTypeAction", 0},
	{}
};

$ClassInfo _FilePane$ViewTypeAction_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$ViewTypeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_FilePane$ViewTypeAction_FieldInfo_,
	_FilePane$ViewTypeAction_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$ViewTypeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$ViewTypeAction($Class* clazz) {
	return $of($alloc(FilePane$ViewTypeAction));
}

void FilePane$ViewTypeAction::init$($FilePane* this$0, int32_t viewType) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($nc(this$0->viewTypeActionNames)->get(viewType));
	this->viewType = viewType;
	$var($String, cmd, nullptr);
	switch (viewType) {
	case 0:
		{
			$assign(cmd, "viewTypeList"_s);
			break;
		}
	case 1:
		{
			$assign(cmd, "viewTypeDetails"_s);
			break;
		}
	default:
		{
			$init($Action);
			$assign(cmd, $cast($String, getValue($Action::NAME)));
		}
	}
	$init($Action);
	putValue($Action::ACTION_COMMAND_KEY, cmd);
}

void FilePane$ViewTypeAction::actionPerformed($ActionEvent* e) {
	this->this$0->setViewType(this->viewType);
}

FilePane$ViewTypeAction::FilePane$ViewTypeAction() {
}

$Class* FilePane$ViewTypeAction::load$($String* name, bool initialize) {
	$loadClass(FilePane$ViewTypeAction, name, initialize, &_FilePane$ViewTypeAction_ClassInfo_, allocate$FilePane$ViewTypeAction);
	return class$;
}

$Class* FilePane$ViewTypeAction::class$ = nullptr;

	} // swing
} // sun