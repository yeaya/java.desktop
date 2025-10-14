#include <java/awt/desktop/FilesEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _FilesEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilesEvent, serialVersionUID)},
	{"files", "Ljava/util/List;", "Ljava/util/List<Ljava/io/File;>;", $FINAL, $field(FilesEvent, files)},
	{}
};

$MethodInfo _FilesEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/io/File;>;)V", 0, $method(static_cast<void(FilesEvent::*)($List*)>(&FilesEvent::init$))},
	{"getFiles", "()Ljava/util/List;", "()Ljava/util/List<Ljava/io/File;>;", $PUBLIC},
	{}
};

$ClassInfo _FilesEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.desktop.FilesEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_FilesEvent_FieldInfo_,
	_FilesEvent_MethodInfo_
};

$Object* allocate$FilesEvent($Class* clazz) {
	return $of($alloc(FilesEvent));
}

void FilesEvent::init$($List* files) {
	$AppEvent::init$();
	$set(this, files, files);
}

$List* FilesEvent::getFiles() {
	return this->files == nullptr ? ($List*)nullptr : static_cast<$List*>($new($ArrayList, static_cast<$Collection*>(this->files)));
}

FilesEvent::FilesEvent() {
}

$Class* FilesEvent::load$($String* name, bool initialize) {
	$loadClass(FilesEvent, name, initialize, &_FilesEvent_ClassInfo_, allocate$FilesEvent);
	return class$;
}

$Class* FilesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java