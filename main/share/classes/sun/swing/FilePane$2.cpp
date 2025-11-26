#include <sun/swing/FilePane$2.h>

#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$2_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$2, this$0)},
	{}
};

$MethodInfo _FilePane$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$2::*)($FilePane*)>(&FilePane$2::init$))},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$2_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	nullptr,
	nullptr
};

$InnerClassInfo _FilePane$2_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$2",
	"java.awt.event.FocusAdapter",
	nullptr,
	_FilePane$2_FieldInfo_,
	_FilePane$2_MethodInfo_,
	nullptr,
	&_FilePane$2_EnclosingMethodInfo_,
	_FilePane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$2($Class* clazz) {
	return $of($alloc(FilePane$2));
}

void FilePane$2::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void FilePane$2::focusLost($FocusEvent* e) {
	if (!$nc(e)->isTemporary()) {
		this->this$0->applyEdit();
	}
}

FilePane$2::FilePane$2() {
}

$Class* FilePane$2::load$($String* name, bool initialize) {
	$loadClass(FilePane$2, name, initialize, &_FilePane$2_ClassInfo_, allocate$FilePane$2);
	return class$;
}

$Class* FilePane$2::class$ = nullptr;

	} // swing
} // sun