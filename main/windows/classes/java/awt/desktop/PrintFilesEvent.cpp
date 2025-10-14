#include <java/awt/desktop/PrintFilesEvent.h>

#include <java/awt/desktop/FilesEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $FilesEvent = ::java::awt::desktop::FilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _PrintFilesEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintFilesEvent, serialVersionUID)},
	{}
};

$MethodInfo _PrintFilesEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/io/File;>;)V", $PUBLIC, $method(static_cast<void(PrintFilesEvent::*)($List*)>(&PrintFilesEvent::init$))},
	{}
};

$ClassInfo _PrintFilesEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.PrintFilesEvent",
	"java.awt.desktop.FilesEvent",
	nullptr,
	_PrintFilesEvent_FieldInfo_,
	_PrintFilesEvent_MethodInfo_
};

$Object* allocate$PrintFilesEvent($Class* clazz) {
	return $of($alloc(PrintFilesEvent));
}

void PrintFilesEvent::init$($List* files) {
	$FilesEvent::init$(files);
}

PrintFilesEvent::PrintFilesEvent() {
}

$Class* PrintFilesEvent::load$($String* name, bool initialize) {
	$loadClass(PrintFilesEvent, name, initialize, &_PrintFilesEvent_ClassInfo_, allocate$PrintFilesEvent);
	return class$;
}

$Class* PrintFilesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java