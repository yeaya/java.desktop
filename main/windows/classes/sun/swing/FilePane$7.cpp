#include <sun/swing/FilePane$7.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$7_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$7, this$0)},
	{}
};

$MethodInfo _FilePane$7_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$7::*)($FilePane*)>(&FilePane$7::init$))},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$7_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"createDetailsView",
	"()Ljavax/swing/JPanel;"
};

$InnerClassInfo _FilePane$7_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$7",
	"java.awt.event.ComponentAdapter",
	nullptr,
	_FilePane$7_FieldInfo_,
	_FilePane$7_MethodInfo_,
	nullptr,
	&_FilePane$7_EnclosingMethodInfo_,
	_FilePane$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$7($Class* clazz) {
	return $of($alloc(FilePane$7));
}

void FilePane$7::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void FilePane$7::componentResized($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, sp, $cast($JScrollPane, $nc(e)->getComponent()));
	this->this$0->fixNameColumnWidth($nc($($nc($($nc(sp)->getViewport()))->getSize()))->width);
	$nc(sp)->removeComponentListener(this);
}

FilePane$7::FilePane$7() {
}

$Class* FilePane$7::load$($String* name, bool initialize) {
	$loadClass(FilePane$7, name, initialize, &_FilePane$7_ClassInfo_, allocate$FilePane$7);
	return class$;
}

$Class* FilePane$7::class$ = nullptr;

	} // swing
} // sun