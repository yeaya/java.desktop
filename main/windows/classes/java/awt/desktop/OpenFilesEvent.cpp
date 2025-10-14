#include <java/awt/desktop/OpenFilesEvent.h>

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

$FieldInfo _OpenFilesEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpenFilesEvent, serialVersionUID)},
	{"searchTerm", "Ljava/lang/String;", nullptr, $FINAL, $field(OpenFilesEvent, searchTerm)},
	{}
};

$MethodInfo _OpenFilesEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<Ljava/io/File;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(OpenFilesEvent::*)($List*,$String*)>(&OpenFilesEvent::init$))},
	{"getSearchTerm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(OpenFilesEvent::*)()>(&OpenFilesEvent::getSearchTerm))},
	{}
};

$ClassInfo _OpenFilesEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.OpenFilesEvent",
	"java.awt.desktop.FilesEvent",
	nullptr,
	_OpenFilesEvent_FieldInfo_,
	_OpenFilesEvent_MethodInfo_
};

$Object* allocate$OpenFilesEvent($Class* clazz) {
	return $of($alloc(OpenFilesEvent));
}

void OpenFilesEvent::init$($List* files, $String* searchTerm) {
	$FilesEvent::init$(files);
	$set(this, searchTerm, searchTerm == nullptr ? ""_s : searchTerm);
}

$String* OpenFilesEvent::getSearchTerm() {
	return this->searchTerm;
}

OpenFilesEvent::OpenFilesEvent() {
}

$Class* OpenFilesEvent::load$($String* name, bool initialize) {
	$loadClass(OpenFilesEvent, name, initialize, &_OpenFilesEvent_ClassInfo_, allocate$OpenFilesEvent);
	return class$;
}

$Class* OpenFilesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java