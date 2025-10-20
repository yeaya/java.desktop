#include <java/awt/Window$WindowDisposerRecord.h>

#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AppContext = ::sun::awt::AppContext;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace java {
	namespace awt {

$FieldInfo _Window$WindowDisposerRecord_FieldInfo_[] = {
	{"owner", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", 0, $field(Window$WindowDisposerRecord, owner)},
	{"weakThis", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", $FINAL, $field(Window$WindowDisposerRecord, weakThis)},
	{"context", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/AppContext;>;", $FINAL, $field(Window$WindowDisposerRecord, context)},
	{}
};

$MethodInfo _Window$WindowDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(Window$WindowDisposerRecord::*)($AppContext*,$Window*)>(&Window$WindowDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"updateOwner", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Window$WindowDisposerRecord_InnerClassesInfo_[] = {
	{"java.awt.Window$WindowDisposerRecord", "java.awt.Window", "WindowDisposerRecord", $STATIC},
	{}
};

$ClassInfo _Window$WindowDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Window$WindowDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_Window$WindowDisposerRecord_FieldInfo_,
	_Window$WindowDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_Window$WindowDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Window"
};

$Object* allocate$Window$WindowDisposerRecord($Class* clazz) {
	return $of($alloc(Window$WindowDisposerRecord));
}

void Window$WindowDisposerRecord::init$($AppContext* context, $Window* victim) {
	$set(this, weakThis, $nc(victim)->weakThis);
	$set(this, context, $new($WeakReference, context));
}

void Window$WindowDisposerRecord::updateOwner() {
	$useLocalCurrentObjectStackCache();
	$var($Window, victim, $cast($Window, $nc(this->weakThis)->get()));
	$set(this, owner, (victim == nullptr) ? ($WeakReference*)nullptr : $new($WeakReference, $($nc(victim)->getOwner())));
}

void Window$WindowDisposerRecord::dispose() {
	$useLocalCurrentObjectStackCache();
	if (this->owner != nullptr) {
		$var($Window, parent, $cast($Window, $nc(this->owner)->get()));
		if (parent != nullptr) {
			parent->removeOwnedWindow(this->weakThis);
		}
	}
	$var($AppContext, ac, $cast($AppContext, $nc(this->context)->get()));
	if (nullptr != ac) {
		$Window::removeFromWindowList(ac, this->weakThis);
	}
}

Window$WindowDisposerRecord::Window$WindowDisposerRecord() {
}

$Class* Window$WindowDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(Window$WindowDisposerRecord, name, initialize, &_Window$WindowDisposerRecord_ClassInfo_, allocate$Window$WindowDisposerRecord);
	return class$;
}

$Class* Window$WindowDisposerRecord::class$ = nullptr;

	} // awt
} // java