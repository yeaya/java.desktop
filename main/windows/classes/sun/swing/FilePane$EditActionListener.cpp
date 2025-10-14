#include <sun/swing/FilePane$EditActionListener.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$EditActionListener_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$EditActionListener, this$0)},
	{}
};

$MethodInfo _FilePane$EditActionListener_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$EditActionListener::*)($FilePane*)>(&FilePane$EditActionListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$EditActionListener_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$EditActionListener", "sun.swing.FilePane", "EditActionListener", 0},
	{}
};

$ClassInfo _FilePane$EditActionListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$EditActionListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_FilePane$EditActionListener_FieldInfo_,
	_FilePane$EditActionListener_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$EditActionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$EditActionListener($Class* clazz) {
	return $of($alloc(FilePane$EditActionListener));
}

void FilePane$EditActionListener::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
}

void FilePane$EditActionListener::actionPerformed($ActionEvent* e) {
	this->this$0->applyEdit();
}

FilePane$EditActionListener::FilePane$EditActionListener() {
}

$Class* FilePane$EditActionListener::load$($String* name, bool initialize) {
	$loadClass(FilePane$EditActionListener, name, initialize, &_FilePane$EditActionListener_ClassInfo_, allocate$FilePane$EditActionListener);
	return class$;
}

$Class* FilePane$EditActionListener::class$ = nullptr;

	} // swing
} // sun