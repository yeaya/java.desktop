#include <sun/awt/SunToolkit$ModalityListenerList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <sun/awt/ModalityEvent.h>
#include <sun/awt/ModalityListener.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ModalityEvent = ::sun::awt::ModalityEvent;
using $ModalityListener = ::sun::awt::ModalityListener;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _SunToolkit$ModalityListenerList_FieldInfo_[] = {
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/ModalityListener;>;", 0, $field(SunToolkit$ModalityListenerList, listeners)},
	{}
};

$MethodInfo _SunToolkit$ModalityListenerList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunToolkit$ModalityListenerList::*)()>(&SunToolkit$ModalityListenerList::init$))},
	{"add", "(Lsun/awt/ModalityListener;)V", nullptr, 0},
	{"modalityPopped", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC},
	{"modalityPushed", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC},
	{"remove", "(Lsun/awt/ModalityListener;)V", nullptr, 0},
	{}
};

$InnerClassInfo _SunToolkit$ModalityListenerList_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$ModalityListenerList", "sun.awt.SunToolkit", "ModalityListenerList", $STATIC},
	{}
};

$ClassInfo _SunToolkit$ModalityListenerList_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SunToolkit$ModalityListenerList",
	"java.lang.Object",
	"sun.awt.ModalityListener",
	_SunToolkit$ModalityListenerList_FieldInfo_,
	_SunToolkit$ModalityListenerList_MethodInfo_,
	nullptr,
	nullptr,
	_SunToolkit$ModalityListenerList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$ModalityListenerList($Class* clazz) {
	return $of($alloc(SunToolkit$ModalityListenerList));
}

void SunToolkit$ModalityListenerList::init$() {
	$set(this, listeners, $new($Vector));
}

void SunToolkit$ModalityListenerList::add($ModalityListener* listener) {
	$nc(this->listeners)->addElement(listener);
}

void SunToolkit$ModalityListenerList::remove($ModalityListener* listener) {
	$nc(this->listeners)->removeElement(listener);
}

void SunToolkit$ModalityListenerList::modalityPushed($ModalityEvent* ev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModalityListener, listener, $cast($ModalityListener, i$->next()));
			{
				$nc(listener)->modalityPushed(ev);
			}
		}
	}
}

void SunToolkit$ModalityListenerList::modalityPopped($ModalityEvent* ev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModalityListener, listener, $cast($ModalityListener, i$->next()));
			{
				$nc(listener)->modalityPopped(ev);
			}
		}
	}
}

SunToolkit$ModalityListenerList::SunToolkit$ModalityListenerList() {
}

$Class* SunToolkit$ModalityListenerList::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$ModalityListenerList, name, initialize, &_SunToolkit$ModalityListenerList_ClassInfo_, allocate$SunToolkit$ModalityListenerList);
	return class$;
}

$Class* SunToolkit$ModalityListenerList::class$ = nullptr;

	} // awt
} // sun