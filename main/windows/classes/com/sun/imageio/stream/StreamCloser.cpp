#include <com/sun/imageio/stream/StreamCloser.h>

#include <com/sun/imageio/stream/StreamCloser$1.h>
#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/WeakHashMap.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <jcpp.h>

using $StreamCloser$1 = ::com::sun::imageio::stream::StreamCloser$1;
using $StreamCloser$CloseAction = ::com::sun::imageio::stream::StreamCloser$CloseAction;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

class StreamCloser$$Lambda$lambda$addToQueue$0 : public $PrivilegedAction {
	$class(StreamCloser$$Lambda$lambda$addToQueue$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* streamCloserRunnable) {
		$set(this, streamCloserRunnable, streamCloserRunnable);
	}
	virtual $Object* run() override {
		 return StreamCloser::lambda$addToQueue$0(streamCloserRunnable);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamCloser$$Lambda$lambda$addToQueue$0>());
	}
	$Runnable* streamCloserRunnable = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StreamCloser$$Lambda$lambda$addToQueue$0::fieldInfos[2] = {
	{"streamCloserRunnable", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(StreamCloser$$Lambda$lambda$addToQueue$0, streamCloserRunnable)},
	{}
};
$MethodInfo StreamCloser$$Lambda$lambda$addToQueue$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamCloser$$Lambda$lambda$addToQueue$0::*)($Runnable*)>(&StreamCloser$$Lambda$lambda$addToQueue$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamCloser$$Lambda$lambda$addToQueue$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.imageio.stream.StreamCloser$$Lambda$lambda$addToQueue$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* StreamCloser$$Lambda$lambda$addToQueue$0::load$($String* name, bool initialize) {
	$loadClass(StreamCloser$$Lambda$lambda$addToQueue$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamCloser$$Lambda$lambda$addToQueue$0::class$ = nullptr;

$FieldInfo _StreamCloser_FieldInfo_[] = {
	{"toCloseQueue", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/imageio/stream/StreamCloser$CloseAction;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(StreamCloser, toCloseQueue)},
	{"streamCloser", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(StreamCloser, streamCloser)},
	{}
};

$MethodInfo _StreamCloser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamCloser::*)()>(&StreamCloser::init$))},
	{"addToQueue", "(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StreamCloser$CloseAction*)>(&StreamCloser::addToQueue))},
	{"createCloseAction", "(Ljavax/imageio/stream/ImageInputStream;)Lcom/sun/imageio/stream/StreamCloser$CloseAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamCloser$CloseAction*(*)($ImageInputStream*)>(&StreamCloser::createCloseAction))},
	{"lambda$addToQueue$0", "(Ljava/lang/Runnable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Runnable*)>(&StreamCloser::lambda$addToQueue$0))},
	{"removeFromQueue", "(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StreamCloser$CloseAction*)>(&StreamCloser::removeFromQueue))},
	{}
};

$InnerClassInfo _StreamCloser_InnerClassesInfo_[] = {
	{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.imageio.stream.StreamCloser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StreamCloser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.stream.StreamCloser",
	"java.lang.Object",
	nullptr,
	_StreamCloser_FieldInfo_,
	_StreamCloser_MethodInfo_,
	nullptr,
	nullptr,
	_StreamCloser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.stream.StreamCloser$CloseAction,com.sun.imageio.stream.StreamCloser$1"
};

$Object* allocate$StreamCloser($Class* clazz) {
	return $of($alloc(StreamCloser));
}

$WeakHashMap* StreamCloser::toCloseQueue = nullptr;
$Thread* StreamCloser::streamCloser = nullptr;

void StreamCloser::init$() {
}

void StreamCloser::addToQueue($StreamCloser$CloseAction* ca) {
	$load(StreamCloser);
	$beforeCallerSensitive();
	$synchronized(StreamCloser::class$) {
		$init(StreamCloser);
		if (StreamCloser::toCloseQueue == nullptr) {
			$assignStatic(StreamCloser::toCloseQueue, $new($WeakHashMap));
		}
		$nc(StreamCloser::toCloseQueue)->put(ca, nullptr);
		if (StreamCloser::streamCloser == nullptr) {
			$var($Runnable, streamCloserRunnable, $new($StreamCloser$1));
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(StreamCloser$$Lambda$lambda$addToQueue$0, streamCloserRunnable)));
		}
	}
}

void StreamCloser::removeFromQueue($StreamCloser$CloseAction* ca) {
	$load(StreamCloser);
	$synchronized(StreamCloser::class$) {
		$init(StreamCloser);
		if (StreamCloser::toCloseQueue != nullptr) {
			$nc(StreamCloser::toCloseQueue)->remove(ca);
		}
	}
}

$StreamCloser$CloseAction* StreamCloser::createCloseAction($ImageInputStream* iis) {
	return $new($StreamCloser$CloseAction, iis);
}

$Object* StreamCloser::lambda$addToQueue$0($Runnable* streamCloserRunnable) {
	$var($ThreadGroup, tg, $ThreadGroupUtils::getRootThreadGroup());
	$init(StreamCloser);
	$assignStatic(StreamCloser::streamCloser, $new($Thread, tg, streamCloserRunnable, "StreamCloser"_s, 0, false));
	$nc(StreamCloser::streamCloser)->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(StreamCloser::streamCloser);
	return $of(nullptr);
}

StreamCloser::StreamCloser() {
}

$Class* StreamCloser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamCloser$$Lambda$lambda$addToQueue$0::classInfo$.name)) {
			return StreamCloser$$Lambda$lambda$addToQueue$0::load$(name, initialize);
		}
	}
	$loadClass(StreamCloser, name, initialize, &_StreamCloser_ClassInfo_, allocate$StreamCloser);
	return class$;
}

$Class* StreamCloser::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com