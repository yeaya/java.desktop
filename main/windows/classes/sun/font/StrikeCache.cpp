#include <sun/font/StrikeCache.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/GlyphDisposedListener.h>
#include <sun/font/StrikeCache$1.h>
#include <sun/font/StrikeCache$2.h>
#include <sun/font/StrikeCache$SoftDisposerRef.h>
#include <sun/font/StrikeCache$WeakDisposerRef.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <jcpp.h>

#undef MINSTRIKES

using $FontStrikeArray = $Array<::sun::font::FontStrike>;
using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $GlyphDisposedListener = ::sun::font::GlyphDisposedListener;
using $StrikeCache$1 = ::sun::font::StrikeCache$1;
using $StrikeCache$2 = ::sun::font::StrikeCache$2;
using $StrikeCache$SoftDisposerRef = ::sun::font::StrikeCache$SoftDisposerRef;
using $StrikeCache$WeakDisposerRef = ::sun::font::StrikeCache$WeakDisposerRef;
using $Disposer = ::sun::java2d::Disposer;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelGraphicsConfig = ::sun::java2d::pipe::hw::AccelGraphicsConfig;
using $BufferedContextProvider = ::sun::java2d::pipe::hw::BufferedContextProvider;

namespace sun {
	namespace font {

$FieldInfo _StrikeCache_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(StrikeCache, unsafe)},
	{"refQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC, $staticField(StrikeCache, refQueue)},
	{"disposeListeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/font/GlyphDisposedListener;>;", $STATIC, $staticField(StrikeCache, disposeListeners)},
	{"MINSTRIKES", "I", nullptr, $STATIC, $staticField(StrikeCache, MINSTRIKES)},
	{"recentStrikeIndex", "I", nullptr, $STATIC, $staticField(StrikeCache, recentStrikeIndex)},
	{"recentStrikes", "[Lsun/font/FontStrike;", nullptr, $STATIC, $staticField(StrikeCache, recentStrikes)},
	{"cacheRefTypeWeak", "Z", nullptr, $STATIC, $staticField(StrikeCache, cacheRefTypeWeak)},
	{"nativeAddressSize", "I", nullptr, $STATIC, $staticField(StrikeCache, nativeAddressSize)},
	{"glyphInfoSize", "I", nullptr, $STATIC, $staticField(StrikeCache, glyphInfoSize)},
	{"xAdvanceOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, xAdvanceOffset)},
	{"yAdvanceOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, yAdvanceOffset)},
	{"boundsOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, boundsOffset)},
	{"widthOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, widthOffset)},
	{"heightOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, heightOffset)},
	{"rowBytesOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, rowBytesOffset)},
	{"topLeftXOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, topLeftXOffset)},
	{"topLeftYOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, topLeftYOffset)},
	{"pixelDataOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, pixelDataOffset)},
	{"cacheCellOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, cacheCellOffset)},
	{"managedOffset", "I", nullptr, $STATIC, $staticField(StrikeCache, managedOffset)},
	{"invisibleGlyphPtr", "J", nullptr, $STATIC, $staticField(StrikeCache, invisibleGlyphPtr)},
	{}
};

$MethodInfo _StrikeCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StrikeCache::*)()>(&StrikeCache::init$))},
	{"addGlyphDisposedListener", "(Lsun/font/GlyphDisposedListener;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($GlyphDisposedListener*)>(&StrikeCache::addGlyphDisposedListener))},
	{"disposeStrike", "(Lsun/font/FontStrikeDisposer;)V", nullptr, $STATIC, $method(static_cast<void(*)($FontStrikeDisposer*)>(&StrikeCache::disposeStrike))},
	{"doDispose", "(Lsun/font/FontStrikeDisposer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FontStrikeDisposer*)>(&StrikeCache::doDispose))},
	{"freeCachedIntMemory", "([IJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int64_t)>(&StrikeCache::freeCachedIntMemory))},
	{"freeCachedLongMemory", "([JJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int64_t)>(&StrikeCache::freeCachedLongMemory))},
	{"freeIntMemory", "([IJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($ints*,int64_t)>(&StrikeCache::freeIntMemory))},
	{"freeIntPointer", "(I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&StrikeCache::freeIntPointer))},
	{"freeLongMemory", "([JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($longs*,int64_t)>(&StrikeCache::freeLongMemory))},
	{"freeLongPointer", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&StrikeCache::freeLongPointer))},
	{"getGlyphCacheDescription", "([J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($longs*)>(&StrikeCache::getGlyphCacheDescription))},
	{"getStrikeRef", "(Lsun/font/FontStrike;)Ljava/lang/ref/Reference;", "(Lsun/font/FontStrike;)Ljava/lang/ref/Reference<Lsun/font/FontStrike;>;", $PUBLIC | $STATIC, $method(static_cast<$Reference*(*)($FontStrike*)>(&StrikeCache::getStrikeRef))},
	{"getStrikeRef", "(Lsun/font/FontStrike;Z)Ljava/lang/ref/Reference;", "(Lsun/font/FontStrike;Z)Ljava/lang/ref/Reference<Lsun/font/FontStrike;>;", $PUBLIC | $STATIC, $method(static_cast<$Reference*(*)($FontStrike*,bool)>(&StrikeCache::getStrikeRef))},
	{"longAddresses", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&StrikeCache::longAddresses))},
	{"notifyDisposeListeners", "(Ljava/util/ArrayList;)V", "(Ljava/util/ArrayList<Ljava/lang/Long;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($ArrayList*)>(&StrikeCache::notifyDisposeListeners))},
	{"refStrike", "(Lsun/font/FontStrike;)V", nullptr, $STATIC, $method(static_cast<void(*)($FontStrike*)>(&StrikeCache::refStrike))},
	{}
};

#define _METHOD_INDEX_freeIntMemory 6
#define _METHOD_INDEX_freeIntPointer 7
#define _METHOD_INDEX_freeLongMemory 8
#define _METHOD_INDEX_freeLongPointer 9
#define _METHOD_INDEX_getGlyphCacheDescription 10

$InnerClassInfo _StrikeCache_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$WeakDisposerRef", "sun.font.StrikeCache", "WeakDisposerRef", $STATIC},
	{"sun.font.StrikeCache$SoftDisposerRef", "sun.font.StrikeCache", "SoftDisposerRef", $STATIC},
	{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.font.StrikeCache$2", nullptr, nullptr, 0},
	{"sun.font.StrikeCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StrikeCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.StrikeCache",
	"java.lang.Object",
	nullptr,
	_StrikeCache_FieldInfo_,
	_StrikeCache_MethodInfo_,
	nullptr,
	nullptr,
	_StrikeCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.StrikeCache$WeakDisposerRef,sun.font.StrikeCache$SoftDisposerRef,sun.font.StrikeCache$DisposableStrike,sun.font.StrikeCache$2,sun.font.StrikeCache$1"
};

$Object* allocate$StrikeCache($Class* clazz) {
	return $of($alloc(StrikeCache));
}

$Unsafe* StrikeCache::unsafe = nullptr;
$ReferenceQueue* StrikeCache::refQueue = nullptr;
$ArrayList* StrikeCache::disposeListeners = nullptr;
int32_t StrikeCache::MINSTRIKES = 0;
int32_t StrikeCache::recentStrikeIndex = 0;
$FontStrikeArray* StrikeCache::recentStrikes = nullptr;
bool StrikeCache::cacheRefTypeWeak = false;
int32_t StrikeCache::nativeAddressSize = 0;
int32_t StrikeCache::glyphInfoSize = 0;
int32_t StrikeCache::xAdvanceOffset = 0;
int32_t StrikeCache::yAdvanceOffset = 0;
int32_t StrikeCache::boundsOffset = 0;
int32_t StrikeCache::widthOffset = 0;
int32_t StrikeCache::heightOffset = 0;
int32_t StrikeCache::rowBytesOffset = 0;
int32_t StrikeCache::topLeftXOffset = 0;
int32_t StrikeCache::topLeftYOffset = 0;
int32_t StrikeCache::pixelDataOffset = 0;
int32_t StrikeCache::cacheCellOffset = 0;
int32_t StrikeCache::managedOffset = 0;
int64_t StrikeCache::invisibleGlyphPtr = 0;

void StrikeCache::init$() {
}

void StrikeCache::getGlyphCacheDescription($longs* infoArray) {
	$init(StrikeCache);
	$prepareNativeStatic(StrikeCache, getGlyphCacheDescription, void, $longs* infoArray);
	$invokeNativeStatic(StrikeCache, getGlyphCacheDescription, infoArray);
	$finishNativeStatic();
}

void StrikeCache::refStrike($FontStrike* strike) {
	$init(StrikeCache);
	int32_t index = StrikeCache::recentStrikeIndex;
	$nc(StrikeCache::recentStrikes)->set(index, strike);
	++index;
	if (index == StrikeCache::MINSTRIKES) {
		index = 0;
	}
	StrikeCache::recentStrikeIndex = index;
}

void StrikeCache::doDispose($FontStrikeDisposer* disposer) {
	$init(StrikeCache);
	if ($nc(disposer)->intGlyphImages != nullptr) {
		freeCachedIntMemory(disposer->intGlyphImages, disposer->pScalerContext);
	} else if (disposer->longGlyphImages != nullptr) {
		freeCachedLongMemory(disposer->longGlyphImages, disposer->pScalerContext);
	} else if (disposer->segIntGlyphImages != nullptr) {
		for (int32_t i = 0; i < $nc(disposer->segIntGlyphImages)->length; ++i) {
			if ($nc(disposer->segIntGlyphImages)->get(i) != nullptr) {
				freeCachedIntMemory($nc(disposer->segIntGlyphImages)->get(i), disposer->pScalerContext);
				disposer->pScalerContext = 0;
				$nc(disposer->segIntGlyphImages)->set(i, nullptr);
			}
		}
		if (disposer->pScalerContext != (int64_t)0) {
			freeCachedIntMemory($$new($ints, 0), disposer->pScalerContext);
		}
	} else if (disposer->segLongGlyphImages != nullptr) {
		for (int32_t i = 0; i < $nc(disposer->segLongGlyphImages)->length; ++i) {
			if ($nc(disposer->segLongGlyphImages)->get(i) != nullptr) {
				freeCachedLongMemory($nc(disposer->segLongGlyphImages)->get(i), disposer->pScalerContext);
				disposer->pScalerContext = 0;
				$nc(disposer->segLongGlyphImages)->set(i, nullptr);
			}
		}
		if (disposer->pScalerContext != (int64_t)0) {
			freeCachedLongMemory($$new($longs, 0), disposer->pScalerContext);
		}
	} else if (disposer->pScalerContext != (int64_t)0) {
		if (longAddresses()) {
			freeCachedLongMemory($$new($longs, 0), disposer->pScalerContext);
		} else {
			freeCachedIntMemory($$new($ints, 0), disposer->pScalerContext);
		}
	}
}

bool StrikeCache::longAddresses() {
	$init(StrikeCache);
	return StrikeCache::nativeAddressSize == 8;
}

void StrikeCache::disposeStrike($FontStrikeDisposer* disposer) {
	$init(StrikeCache);
	$init($Disposer);
	if ($Disposer::pollingQueue) {
		doDispose(disposer);
		return;
	}
	$var($RenderQueue, rq, nullptr);
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if (!$GraphicsEnvironment::isHeadless()) {
		$var($GraphicsConfiguration, gc, $nc($($nc(ge)->getDefaultScreenDevice()))->getDefaultConfiguration());
		if ($instanceOf($AccelGraphicsConfig, gc)) {
			$var($AccelGraphicsConfig, agc, $cast($AccelGraphicsConfig, gc));
			$var($BufferedContext, bc, $nc(agc)->getContext());
			if (bc != nullptr) {
				$assign(rq, bc->getRenderQueue());
			}
		}
	}
	if (rq != nullptr) {
		rq->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				rq->flushAndInvokeNow($$new($StrikeCache$2, disposer));
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				rq->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		doDispose(disposer);
	}
}

void StrikeCache::freeIntPointer(int32_t ptr) {
	$init(StrikeCache);
	$prepareNativeStatic(StrikeCache, freeIntPointer, void, int32_t ptr);
	$invokeNativeStatic(StrikeCache, freeIntPointer, ptr);
	$finishNativeStatic();
}

void StrikeCache::freeLongPointer(int64_t ptr) {
	$init(StrikeCache);
	$prepareNativeStatic(StrikeCache, freeLongPointer, void, int64_t ptr);
	$invokeNativeStatic(StrikeCache, freeLongPointer, ptr);
	$finishNativeStatic();
}

void StrikeCache::freeIntMemory($ints* glyphPtrs, int64_t pContext) {
	$init(StrikeCache);
	$prepareNativeStatic(StrikeCache, freeIntMemory, void, $ints* glyphPtrs, int64_t pContext);
	$invokeNativeStatic(StrikeCache, freeIntMemory, glyphPtrs, pContext);
	$finishNativeStatic();
}

void StrikeCache::freeLongMemory($longs* glyphPtrs, int64_t pContext) {
	$init(StrikeCache);
	$prepareNativeStatic(StrikeCache, freeLongMemory, void, $longs* glyphPtrs, int64_t pContext);
	$invokeNativeStatic(StrikeCache, freeLongMemory, glyphPtrs, pContext);
	$finishNativeStatic();
}

void StrikeCache::freeCachedIntMemory($ints* glyphPtrs, int64_t pContext) {
	$init(StrikeCache);
	$synchronized(StrikeCache::disposeListeners) {
		if ($nc(StrikeCache::disposeListeners)->size() > 0) {
			$var($ArrayList, gids, nullptr);
			for (int32_t i = 0; i < $nc(glyphPtrs)->length; ++i) {
				if (glyphPtrs->get(i) != 0 && $nc(StrikeCache::unsafe)->getByte(glyphPtrs->get(i) + StrikeCache::managedOffset) == 0) {
					if (gids == nullptr) {
						$assign(gids, $new($ArrayList));
					}
					$nc(gids)->add($($Long::valueOf((int64_t)glyphPtrs->get(i))));
				}
			}
			if (gids != nullptr) {
				notifyDisposeListeners(gids);
			}
		}
	}
	freeIntMemory(glyphPtrs, pContext);
}

void StrikeCache::freeCachedLongMemory($longs* glyphPtrs, int64_t pContext) {
	$init(StrikeCache);
	$synchronized(StrikeCache::disposeListeners) {
		if ($nc(StrikeCache::disposeListeners)->size() > 0) {
			$var($ArrayList, gids, nullptr);
			for (int32_t i = 0; i < $nc(glyphPtrs)->length; ++i) {
				if (glyphPtrs->get(i) != 0 && $nc(StrikeCache::unsafe)->getByte(glyphPtrs->get(i) + StrikeCache::managedOffset) == 0) {
					if (gids == nullptr) {
						$assign(gids, $new($ArrayList));
					}
					$nc(gids)->add($($Long::valueOf(glyphPtrs->get(i))));
				}
			}
			if (gids != nullptr) {
				notifyDisposeListeners(gids);
			}
		}
	}
	freeLongMemory(glyphPtrs, pContext);
}

void StrikeCache::addGlyphDisposedListener($GlyphDisposedListener* listener) {
	$init(StrikeCache);
	$synchronized(StrikeCache::disposeListeners) {
		$nc(StrikeCache::disposeListeners)->add(listener);
	}
}

void StrikeCache::notifyDisposeListeners($ArrayList* glyphs) {
	$init(StrikeCache);
	{
		$var($Iterator, i$, $nc(StrikeCache::disposeListeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GlyphDisposedListener, listener, $cast($GlyphDisposedListener, i$->next()));
			{
				$nc(listener)->glyphDisposed(glyphs);
			}
		}
	}
}

$Reference* StrikeCache::getStrikeRef($FontStrike* strike) {
	$init(StrikeCache);
	return getStrikeRef(strike, StrikeCache::cacheRefTypeWeak);
}

$Reference* StrikeCache::getStrikeRef($FontStrike* strike, bool weak) {
	$init(StrikeCache);
	if ($nc(strike)->disposer == nullptr) {
		if (weak) {
			return $new($WeakReference, strike);
		} else {
			return $new($SoftReference, strike);
		}
	}
	if (weak) {
		return $new($StrikeCache$WeakDisposerRef, strike);
	} else {
		return $new($StrikeCache$SoftDisposerRef, strike);
	}
}

void clinit$StrikeCache($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(StrikeCache::unsafe, $Unsafe::getUnsafe());
	$assignStatic(StrikeCache::refQueue, $Disposer::getQueue());
	$assignStatic(StrikeCache::disposeListeners, $new($ArrayList, 1));
	StrikeCache::MINSTRIKES = 8;
	StrikeCache::recentStrikeIndex = 0;
	{
		$var($longs, nativeInfo, $new($longs, 13));
		StrikeCache::getGlyphCacheDescription(nativeInfo);
		StrikeCache::nativeAddressSize = (int32_t)nativeInfo->get(0);
		StrikeCache::glyphInfoSize = (int32_t)nativeInfo->get(1);
		StrikeCache::xAdvanceOffset = (int32_t)nativeInfo->get(2);
		StrikeCache::yAdvanceOffset = (int32_t)nativeInfo->get(3);
		StrikeCache::widthOffset = (int32_t)nativeInfo->get(4);
		StrikeCache::heightOffset = (int32_t)nativeInfo->get(5);
		StrikeCache::rowBytesOffset = (int32_t)nativeInfo->get(6);
		StrikeCache::topLeftXOffset = (int32_t)nativeInfo->get(7);
		StrikeCache::topLeftYOffset = (int32_t)nativeInfo->get(8);
		StrikeCache::pixelDataOffset = (int32_t)nativeInfo->get(9);
		StrikeCache::invisibleGlyphPtr = nativeInfo->get(10);
		StrikeCache::cacheCellOffset = (int32_t)nativeInfo->get(11);
		StrikeCache::managedOffset = (int32_t)nativeInfo->get(12);
		if (StrikeCache::nativeAddressSize < 4) {
			$throwNew($InternalError, $$str({"Unexpected address size for font data: "_s, $$str(StrikeCache::nativeAddressSize)}));
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($StrikeCache$1)));
	}
}

StrikeCache::StrikeCache() {
}

$Class* StrikeCache::load$($String* name, bool initialize) {
	$loadClass(StrikeCache, name, initialize, &_StrikeCache_ClassInfo_, clinit$StrikeCache, allocate$StrikeCache);
	return class$;
}

$Class* StrikeCache::class$ = nullptr;

	} // font
} // sun