#include <sun/swing/FilePane$5.h>

#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$5_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$5, this$0)},
	{"val$list", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$5, val$list)},
	{}
};

$MethodInfo _FilePane$5_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JList;)V", "()V", 0, $method(static_cast<void(FilePane$5::*)($FilePane*,$JList*)>(&FilePane$5::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$5_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"createList",
	"()Ljavax/swing/JPanel;"
};

$InnerClassInfo _FilePane$5_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$5",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	_FilePane$5_FieldInfo_,
	_FilePane$5_MethodInfo_,
	nullptr,
	&_FilePane$5_EnclosingMethodInfo_,
	_FilePane$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$5($Class* clazz) {
	return $of($alloc(FilePane$5));
}

void FilePane$5::init$($FilePane* this$0, $JList* val$list) {
	$set(this, this$0, this$0);
	$set(this, val$list, val$list);
}

void FilePane$5::intervalAdded($ListDataEvent* e) {
	this->this$0->updateListRowCount(this->val$list);
}

void FilePane$5::intervalRemoved($ListDataEvent* e) {
	this->this$0->updateListRowCount(this->val$list);
}

void FilePane$5::contentsChanged($ListDataEvent* e) {
	if (this->this$0->isShowing()) {
		this->this$0->clearSelection();
	}
	this->this$0->updateListRowCount(this->val$list);
}

FilePane$5::FilePane$5() {
}

$Class* FilePane$5::load$($String* name, bool initialize) {
	$loadClass(FilePane$5, name, initialize, &_FilePane$5_ClassInfo_, allocate$FilePane$5);
	return class$;
}

$Class* FilePane$5::class$ = nullptr;

	} // swing
} // sun