#include <sun/awt/datatransfer/SunClipboard.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorEvent.h>
#include <java/awt/datatransfer/FlavorListener.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/SystemFlavorMap.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/datatransfer/ClipboardTransferable.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/TransferableProxy.h>
#include <jcpp.h>

#undef CLIPBOARD_FLAVOR_LISTENER_KEY
#undef DISPOSED_PROPERTY_NAME
#undef PRIORITY_EVENT
#undef TRUE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $FlavorListenerArray = $Array<::java::awt::datatransfer::FlavorListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorEvent = ::java::awt::datatransfer::FlavorEvent;
using $FlavorListener = ::java::awt::datatransfer::FlavorListener;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $SystemFlavorMap = ::java::awt::datatransfer::SystemFlavorMap;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $EventObject = ::java::util::EventObject;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AppContext = ::sun::awt::AppContext;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ClipboardTransferable = ::sun::awt::datatransfer::ClipboardTransferable;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $TransferableProxy = ::sun::awt::datatransfer::TransferableProxy;

namespace sun {
	namespace awt {
		namespace datatransfer {

class SunClipboard$$Lambda$lambda$setContents$0 : public $Runnable {
	$class(SunClipboard$$Lambda$lambda$setContents$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SunClipboard* inst, $ClipboardOwner* oldOwner, $Transferable* oldContents) {
		$set(this, inst$, inst);
		$set(this, oldOwner, oldOwner);
		$set(this, oldContents, oldContents);
	}
	virtual void run() override {
		$nc(inst$)->lambda$setContents$0(oldOwner, oldContents);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunClipboard$$Lambda$lambda$setContents$0>());
	}
	SunClipboard* inst$ = nullptr;
	$ClipboardOwner* oldOwner = nullptr;
	$Transferable* oldContents = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SunClipboard$$Lambda$lambda$setContents$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$setContents$0, inst$)},
	{"oldOwner", "Ljava/awt/datatransfer/ClipboardOwner;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$setContents$0, oldOwner)},
	{"oldContents", "Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$setContents$0, oldContents)},
	{}
};
$MethodInfo SunClipboard$$Lambda$lambda$setContents$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/ClipboardOwner;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, $method(static_cast<void(SunClipboard$$Lambda$lambda$setContents$0::*)(SunClipboard*,$ClipboardOwner*,$Transferable*)>(&SunClipboard$$Lambda$lambda$setContents$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunClipboard$$Lambda$lambda$setContents$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.SunClipboard$$Lambda$lambda$setContents$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SunClipboard$$Lambda$lambda$setContents$0::load$($String* name, bool initialize) {
	$loadClass(SunClipboard$$Lambda$lambda$setContents$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunClipboard$$Lambda$lambda$setContents$0::class$ = nullptr;

class SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1 : public $Runnable {
	$class(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SunClipboard* inst, $AppContext* disposedContext) {
		$set(this, inst$, inst);
		$set(this, disposedContext, disposedContext);
	}
	virtual void run() override {
		$nc(inst$)->lambda$lostOwnershipLater$1(disposedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1>());
	}
	SunClipboard* inst$ = nullptr;
	$AppContext* disposedContext = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1, inst$)},
	{"disposedContext", "Lsun/awt/AppContext;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1, disposedContext)},
	{}
};
$MethodInfo SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/SunClipboard;Lsun/awt/AppContext;)V", nullptr, $PUBLIC, $method(static_cast<void(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::*)(SunClipboard*,$AppContext*)>(&SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::load$($String* name, bool initialize) {
	$loadClass(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::class$ = nullptr;

class SunClipboard$$Lambda$lambda$checkChange$2$2 : public $Runnable {
	$class(SunClipboard$$Lambda$lambda$checkChange$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SunClipboard* inst, $FlavorListener* listener) {
		$set(this, inst$, inst);
		$set(this, listener, listener);
	}
	virtual void run() override {
		$nc(inst$)->lambda$checkChange$2(listener);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunClipboard$$Lambda$lambda$checkChange$2$2>());
	}
	SunClipboard* inst$ = nullptr;
	$FlavorListener* listener = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SunClipboard$$Lambda$lambda$checkChange$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$checkChange$2$2, inst$)},
	{"listener", "Ljava/awt/datatransfer/FlavorListener;", nullptr, $PUBLIC, $field(SunClipboard$$Lambda$lambda$checkChange$2$2, listener)},
	{}
};
$MethodInfo SunClipboard$$Lambda$lambda$checkChange$2$2::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC, $method(static_cast<void(SunClipboard$$Lambda$lambda$checkChange$2$2::*)(SunClipboard*,$FlavorListener*)>(&SunClipboard$$Lambda$lambda$checkChange$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunClipboard$$Lambda$lambda$checkChange$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.SunClipboard$$Lambda$lambda$checkChange$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SunClipboard$$Lambda$lambda$checkChange$2$2::load$($String* name, bool initialize) {
	$loadClass(SunClipboard$$Lambda$lambda$checkChange$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunClipboard$$Lambda$lambda$checkChange$2$2::class$ = nullptr;

$FieldInfo _SunClipboard_FieldInfo_[] = {
	{"contentsContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(SunClipboard, contentsContext)},
	{"CLIPBOARD_FLAVOR_LISTENER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SunClipboard, CLIPBOARD_FLAVOR_LISTENER_KEY)},
	{"numberOfFlavorListeners", "I", nullptr, $PRIVATE | $VOLATILE, $field(SunClipboard, numberOfFlavorListeners)},
	{"currentFormats", "[J", nullptr, $PRIVATE | $VOLATILE, $field(SunClipboard, currentFormats)},
	{}
};

$MethodInfo _SunClipboard_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SunClipboard::*)($String*)>(&SunClipboard::init$))},
	{"addFlavorListener", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"areFlavorListenersRegistered", "()Z", nullptr, $PUBLIC},
	{"checkChange", "([J)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SunClipboard::*)($longs*)>(&SunClipboard::checkChange))},
	{"clearNativeContext", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"closeClipboard", "()V", nullptr, $PUBLIC},
	{"createLocaleTransferable", "([J)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"formatArrayAsDataFlavorSet", "([J)Ljava/util/Set;", "([J)Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($longs*)>(&SunClipboard::formatArrayAsDataFlavorSet))},
	{"getAvailableDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"getClipboardData", "(J)[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getClipboardFormats", "()[J", nullptr, $PROTECTED | $ABSTRACT},
	{"getClipboardFormatsOpenClose", "()[J", nullptr, $PROTECTED},
	{"getContents", "(Ljava/lang/Object;)Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getContextContents", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getDefaultFlavorTable", "()Ljava/awt/datatransfer/FlavorTable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FlavorTable*(*)()>(&SunClipboard::getDefaultFlavorTable))},
	{"getFlavorListeners", "(Lsun/awt/AppContext;)Ljava/util/Set;", "(Lsun/awt/AppContext;)Ljava/util/Set<Ljava/awt/datatransfer/FlavorListener;>;", $PRIVATE, $method(static_cast<$Set*(SunClipboard::*)($AppContext*)>(&SunClipboard::getFlavorListeners))},
	{"getFlavorListeners", "()[Ljava/awt/datatransfer/FlavorListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getID", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"initContext", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(SunClipboard::*)()>(&SunClipboard::initContext))},
	{"isDataFlavorAvailable", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"lambda$checkChange$2", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(SunClipboard::*)($FlavorListener*)>(&SunClipboard::lambda$checkChange$2))},
	{"lambda$lostOwnershipLater$1", "(Lsun/awt/AppContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(SunClipboard::*)($AppContext*)>(&SunClipboard::lambda$lostOwnershipLater$1))},
	{"lambda$setContents$0", "(Ljava/awt/datatransfer/ClipboardOwner;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(SunClipboard::*)($ClipboardOwner*,$Transferable*)>(&SunClipboard::lambda$setContents$0))},
	{"lostOwnershipImpl", "()V", nullptr, $PROTECTED},
	{"lostOwnershipLater", "(Lsun/awt/AppContext;)V", nullptr, $PROTECTED},
	{"lostOwnershipNow", "(Lsun/awt/AppContext;)V", nullptr, $PROTECTED},
	{"openClipboard", "(Lsun/awt/datatransfer/SunClipboard;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"registerClipboardViewerChecked", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"removeFlavorListener", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setContents", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/ClipboardOwner;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setContentsNative", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregisterClipboardViewerChecked", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _SunClipboard_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.datatransfer.SunClipboard",
	"java.awt.datatransfer.Clipboard",
	"java.beans.PropertyChangeListener",
	_SunClipboard_FieldInfo_,
	_SunClipboard_MethodInfo_
};

$Object* allocate$SunClipboard($Class* clazz) {
	return $of($alloc(SunClipboard));
}

int32_t SunClipboard::hashCode() {
	 return this->$Clipboard::hashCode();
}

bool SunClipboard::equals(Object$* arg0) {
	 return this->$Clipboard::equals(arg0);
}

$Object* SunClipboard::clone() {
	 return this->$Clipboard::clone();
}

$String* SunClipboard::toString() {
	 return this->$Clipboard::toString();
}

void SunClipboard::finalize() {
	this->$Clipboard::finalize();
}

void SunClipboard::init$($String* name) {
	$Clipboard::init$(name);
	$set(this, contentsContext, nullptr);
	this->numberOfFlavorListeners = 0;
	$set(this, CLIPBOARD_FLAVOR_LISTENER_KEY, $new($StringBuffer, $$str({name, "_CLIPBOARD_FLAVOR_LISTENER_KEY"_s})));
}

void SunClipboard::setContents($Transferable* contents, $ClipboardOwner* owner) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (contents == nullptr) {
			$throwNew($NullPointerException, "contents"_s);
		}
		initContext();
		$var($ClipboardOwner, oldOwner, this->owner);
		$var($Transferable, oldContents, this->contents);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$set(this, owner, owner);
				$set(this, contents, $new($TransferableProxy, contents, true));
				setContentsNative(contents);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (oldOwner != nullptr && oldOwner != owner) {
					$EventQueue::invokeLater(static_cast<$Runnable*>($$new(SunClipboard$$Lambda$lambda$setContents$0, this, oldOwner, oldContents)));
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void SunClipboard::initContext() {
	$synchronized(this) {
		$var($AppContext, context, $AppContext::getAppContext());
		if (this->contentsContext != context) {
			$synchronized(context) {
				if ($nc(context)->isDisposed()) {
					$throwNew($IllegalStateException, "Can\'t set contents from disposed AppContext"_s);
				}
				$nc(context)->addPropertyChangeListener($AppContext::DISPOSED_PROPERTY_NAME, this);
			}
			if (this->contentsContext != nullptr) {
				$nc(this->contentsContext)->removePropertyChangeListener($AppContext::DISPOSED_PROPERTY_NAME, this);
			}
			$set(this, contentsContext, context);
		}
	}
}

$Transferable* SunClipboard::getContents(Object$* requestor) {
	$synchronized(this) {
		if (this->contents != nullptr) {
			return this->contents;
		}
		return $new($ClipboardTransferable, this);
	}
}

$Transferable* SunClipboard::getContextContents() {
	$synchronized(this) {
		$var($AppContext, context, $AppContext::getAppContext());
		return (context == this->contentsContext) ? this->contents : ($Transferable*)nullptr;
	}
}

$DataFlavorArray* SunClipboard::getAvailableDataFlavors() {
	$useLocalCurrentObjectStackCache();
	$var($Transferable, cntnts, getContextContents());
	if (cntnts != nullptr) {
		return cntnts->getTransferDataFlavors();
	}
	$var($longs, formats, getClipboardFormatsOpenClose());
	return $nc($($DataTransferer::getInstance()))->getFlavorsForFormatsAsArray(formats, $(getDefaultFlavorTable()));
}

bool SunClipboard::isDataFlavorAvailable($DataFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	if (flavor == nullptr) {
		$throwNew($NullPointerException, "flavor"_s);
	}
	$var($Transferable, cntnts, getContextContents());
	if (cntnts != nullptr) {
		return cntnts->isDataFlavorSupported(flavor);
	}
	$var($longs, formats, getClipboardFormatsOpenClose());
	return $nc($(formatArrayAsDataFlavorSet(formats)))->contains(flavor);
}

$Object* SunClipboard::getData($DataFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	if (flavor == nullptr) {
		$throwNew($NullPointerException, "flavor"_s);
	}
	$var($Transferable, cntnts, getContextContents());
	if (cntnts != nullptr) {
		return $of(cntnts->getTransferData(flavor));
	}
	int64_t format = 0;
	$var($bytes, data, nullptr);
	$var($Transferable, localeTransferable, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			openClipboard(nullptr);
			$var($longs, formats, getClipboardFormats());
			$var($Long, lFormat, $cast($Long, $nc($($nc($($DataTransferer::getInstance()))->getFlavorsForFormats(formats, $(getDefaultFlavorTable()))))->get(flavor)));
			if (lFormat == nullptr) {
				$throwNew($UnsupportedFlavorException, flavor);
			}
			format = $nc(lFormat)->longValue();
			$assign(data, getClipboardData(format));
			if ($nc($($DataTransferer::getInstance()))->isLocaleDependentTextFormat(format)) {
				$assign(localeTransferable, createLocaleTransferable(formats));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			closeClipboard();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of($nc($($DataTransferer::getInstance()))->translateBytes(data, flavor, format, localeTransferable));
}

$Transferable* SunClipboard::createLocaleTransferable($longs* formats) {
	return nullptr;
}

void SunClipboard::openClipboard(SunClipboard* newOwner) {
}

void SunClipboard::closeClipboard() {
}

void SunClipboard::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$init($AppContext);
	bool var$0 = $nc($AppContext::DISPOSED_PROPERTY_NAME)->equals($($nc(evt)->getPropertyName()));
	$init($Boolean);
	if (var$0 && $nc($Boolean::TRUE)->equals($($nc(evt)->getNewValue()))) {
		$var($AppContext, disposedContext, $cast($AppContext, $nc(evt)->getSource()));
		lostOwnershipLater(disposedContext);
	}
}

void SunClipboard::lostOwnershipImpl() {
	lostOwnershipLater(nullptr);
}

void SunClipboard::lostOwnershipLater($AppContext* disposedContext) {
	$useLocalCurrentObjectStackCache();
	$var($AppContext, context, this->contentsContext);
	if (context == nullptr) {
		return;
	}
	$SunToolkit::postEvent(context, $$new($PeerEvent, this, static_cast<$Runnable*>($$new(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1, this, disposedContext)), $PeerEvent::PRIORITY_EVENT));
}

void SunClipboard::lostOwnershipNow($AppContext* disposedContext) {
	$useLocalCurrentObjectStackCache();
	$var(SunClipboard, sunClipboard, this);
	$var($ClipboardOwner, owner, nullptr);
	$var($Transferable, contents, nullptr);
	$synchronized(sunClipboard) {
		$var($AppContext, context, sunClipboard->contentsContext);
		if (context == nullptr) {
			return;
		}
		if (disposedContext == nullptr || context == disposedContext) {
			$assign(owner, sunClipboard->owner);
			$assign(contents, sunClipboard->contents);
			$set(sunClipboard, contentsContext, nullptr);
			$set(sunClipboard, owner, nullptr);
			$set(sunClipboard, contents, nullptr);
			sunClipboard->clearNativeContext();
			$init($AppContext);
			$nc(context)->removePropertyChangeListener($AppContext::DISPOSED_PROPERTY_NAME, sunClipboard);
		} else {
			return;
		}
	}
	if (owner != nullptr) {
		owner->lostOwnership(sunClipboard, contents);
	}
}

$longs* SunClipboard::getClipboardFormatsOpenClose() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($longs, var$2, nullptr);
		bool return$1 = false;
		try {
			openClipboard(nullptr);
			$assign(var$2, getClipboardFormats());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			closeClipboard();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Set* SunClipboard::formatArrayAsDataFlavorSet($longs* formats) {
	$init(SunClipboard);
	$useLocalCurrentObjectStackCache();
	return (formats == nullptr) ? ($Set*)nullptr : $nc($($DataTransferer::getInstance()))->getFlavorsForFormatsAsSet(formats, $(getDefaultFlavorTable()));
}

void SunClipboard::addFlavorListener($FlavorListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (listener == nullptr) {
			return;
		}
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($Set, flavorListeners, getFlavorListeners(appContext));
		if (flavorListeners == nullptr) {
			$assign(flavorListeners, $new($HashSet));
			$nc(appContext)->put(this->CLIPBOARD_FLAVOR_LISTENER_KEY, flavorListeners);
		}
		$nc(flavorListeners)->add(listener);
		if (this->numberOfFlavorListeners++ == 0) {
			$var($longs, currentFormats, nullptr);
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						openClipboard(nullptr);
						$assign(currentFormats, getClipboardFormats());
					} catch ($IllegalStateException&) {
						$catch();
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					closeClipboard();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$set(this, currentFormats, currentFormats);
			registerClipboardViewerChecked();
		}
	}
}

void SunClipboard::removeFlavorListener($FlavorListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (listener == nullptr) {
			return;
		}
		$var($Set, flavorListeners, getFlavorListeners($($AppContext::getAppContext())));
		if (flavorListeners == nullptr) {
			return;
		}
		if ($nc(flavorListeners)->remove(listener) && --this->numberOfFlavorListeners == 0) {
			unregisterClipboardViewerChecked();
			$set(this, currentFormats, nullptr);
		}
	}
}

$Set* SunClipboard::getFlavorListeners($AppContext* appContext) {
	return $cast($Set, $nc(appContext)->get(this->CLIPBOARD_FLAVOR_LISTENER_KEY));
}

$FlavorListenerArray* SunClipboard::getFlavorListeners() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Set, flavorListeners, getFlavorListeners($($AppContext::getAppContext())));
		return flavorListeners == nullptr ? $new($FlavorListenerArray, 0) : $fcast($FlavorListenerArray, $nc(flavorListeners)->toArray($$new($FlavorListenerArray, flavorListeners->size())));
	}
}

bool SunClipboard::areFlavorListenersRegistered() {
	return (this->numberOfFlavorListeners > 0);
}

void SunClipboard::checkChange($longs* formats) {
	$useLocalCurrentObjectStackCache();
	if ($Arrays::equals(formats, this->currentFormats)) {
		return;
	}
	$set(this, currentFormats, formats);
	{
		$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AppContext, appContext, $cast($AppContext, i$->next()));
			{
				if (appContext == nullptr || $nc(appContext)->isDisposed()) {
					continue;
				}
				$var($Set, flavorListeners, getFlavorListeners(appContext));
				if (flavorListeners != nullptr) {
					{
						$var($Iterator, i$, flavorListeners->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($FlavorListener, listener, $cast($FlavorListener, i$->next()));
							{
								if (listener != nullptr) {
									$var($PeerEvent, peerEvent, $new($PeerEvent, this, static_cast<$Runnable*>($$new(SunClipboard$$Lambda$lambda$checkChange$2$2, this, listener)), $PeerEvent::PRIORITY_EVENT));
									$SunToolkit::postEvent(appContext, peerEvent);
								}
							}
						}
					}
				}
			}
		}
	}
}

$FlavorTable* SunClipboard::getDefaultFlavorTable() {
	$init(SunClipboard);
	return $cast($FlavorTable, $SystemFlavorMap::getDefaultFlavorMap());
}

void SunClipboard::lambda$checkChange$2($FlavorListener* listener) {
	$nc(listener)->flavorsChanged($$new($FlavorEvent, this));
}

void SunClipboard::lambda$lostOwnershipLater$1($AppContext* disposedContext) {
	lostOwnershipNow(disposedContext);
}

void SunClipboard::lambda$setContents$0($ClipboardOwner* oldOwner, $Transferable* oldContents) {
	$nc(oldOwner)->lostOwnership(this, oldContents);
}

SunClipboard::SunClipboard() {
}

$Class* SunClipboard::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SunClipboard$$Lambda$lambda$setContents$0::classInfo$.name)) {
			return SunClipboard$$Lambda$lambda$setContents$0::load$(name, initialize);
		}
		if (name->equals(SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::classInfo$.name)) {
			return SunClipboard$$Lambda$lambda$lostOwnershipLater$1$1::load$(name, initialize);
		}
		if (name->equals(SunClipboard$$Lambda$lambda$checkChange$2$2::classInfo$.name)) {
			return SunClipboard$$Lambda$lambda$checkChange$2$2::load$(name, initialize);
		}
	}
	$loadClass(SunClipboard, name, initialize, &_SunClipboard_ClassInfo_, allocate$SunClipboard);
	return class$;
}

$Class* SunClipboard::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun