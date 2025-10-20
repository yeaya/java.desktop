#include <sun/java2d/SurfaceDataProxy.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTracker.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy$1.h>
#include <sun/java2d/SurfaceDataProxy$CountdownTracker.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef NEVER_CURRENT
#undef UNCACHED
#undef UNTRACKABLE

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SurfaceManager$FlushableCacheData = ::sun::awt::image::SurfaceManager$FlushableCacheData;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTracker = ::sun::java2d::StateTracker;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy$1 = ::sun::java2d::SurfaceDataProxy$1;
using $SurfaceDataProxy$CountdownTracker = ::sun::java2d::SurfaceDataProxy$CountdownTracker;
using $Blit = ::sun::java2d::loops::Blit;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {

$FieldInfo _SurfaceDataProxy_FieldInfo_[] = {
	{"cachingAllowed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceDataProxy, cachingAllowed)},
	{"defaultThreshold", "I", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceDataProxy, defaultThreshold)},
	{"UNCACHED", "Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $staticField(SurfaceDataProxy, UNCACHED)},
	{"threshold", "I", nullptr, $PRIVATE, $field(SurfaceDataProxy, threshold)},
	{"srcTracker", "Lsun/java2d/StateTracker;", nullptr, $PRIVATE, $field(SurfaceDataProxy, srcTracker)},
	{"numtries", "I", nullptr, $PRIVATE, $field(SurfaceDataProxy, numtries)},
	{"cachedSD", "Lsun/java2d/SurfaceData;", nullptr, $PRIVATE, $field(SurfaceDataProxy, cachedSD)},
	{"cacheTracker", "Lsun/java2d/StateTracker;", nullptr, $PRIVATE, $field(SurfaceDataProxy, cacheTracker)},
	{"valid", "Z", nullptr, $PRIVATE, $field(SurfaceDataProxy, valid)},
	{}
};

$MethodInfo _SurfaceDataProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceDataProxy::*)()>(&SurfaceDataProxy::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceDataProxy::*)(int32_t)>(&SurfaceDataProxy::init$))},
	{"activateDisplayListener", "()V", nullptr, $PROTECTED},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"flush", "(Z)Z", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getRetryTracker", "(Lsun/java2d/SurfaceData;)Lsun/java2d/StateTracker;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isAccelerated", "()Z", nullptr, $PUBLIC},
	{"isCachingAllowed", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SurfaceDataProxy::isCachingAllowed))},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"replaceData", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)V", nullptr, $PUBLIC},
	{"updateSurfaceDataBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;IILjava/awt/Color;)V", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SurfaceDataProxy_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$FlushableCacheData", "sun.awt.image.SurfaceManager", "FlushableCacheData", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.SurfaceDataProxy$CountdownTracker", "sun.java2d.SurfaceDataProxy", "CountdownTracker", $PUBLIC | $STATIC},
	{"sun.java2d.SurfaceDataProxy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.SurfaceDataProxy",
	"java.lang.Object",
	"sun.awt.DisplayChangedListener,sun.awt.image.SurfaceManager$FlushableCacheData",
	_SurfaceDataProxy_FieldInfo_,
	_SurfaceDataProxy_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceDataProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceDataProxy$CountdownTracker,sun.java2d.SurfaceDataProxy$1"
};

$Object* allocate$SurfaceDataProxy($Class* clazz) {
	return $of($alloc(SurfaceDataProxy));
}

int32_t SurfaceDataProxy::hashCode() {
	 return this->$DisplayChangedListener::hashCode();
}

bool SurfaceDataProxy::equals(Object$* arg0) {
	 return this->$DisplayChangedListener::equals(arg0);
}

$Object* SurfaceDataProxy::clone() {
	 return this->$DisplayChangedListener::clone();
}

$String* SurfaceDataProxy::toString() {
	 return this->$DisplayChangedListener::toString();
}

void SurfaceDataProxy::finalize() {
	this->$DisplayChangedListener::finalize();
}

bool SurfaceDataProxy::cachingAllowed = false;
int32_t SurfaceDataProxy::defaultThreshold = 0;

SurfaceDataProxy* SurfaceDataProxy::UNCACHED = nullptr;

bool SurfaceDataProxy::isCachingAllowed() {
	$init(SurfaceDataProxy);
	return SurfaceDataProxy::cachingAllowed;
}

$StateTracker* SurfaceDataProxy::getRetryTracker($SurfaceData* srcData) {
	return $new($SurfaceDataProxy$CountdownTracker, this->threshold);
}

void SurfaceDataProxy::init$() {
	SurfaceDataProxy::init$(SurfaceDataProxy::defaultThreshold);
}

void SurfaceDataProxy::init$(int32_t threshold) {
	this->threshold = threshold;
	$init($StateTracker);
	$set(this, srcTracker, $StateTracker::NEVER_CURRENT);
	$set(this, cacheTracker, $StateTracker::NEVER_CURRENT);
	this->valid = true;
}

bool SurfaceDataProxy::isValid() {
	return this->valid;
}

void SurfaceDataProxy::invalidate() {
	this->valid = false;
}

bool SurfaceDataProxy::flush(bool deaccelerated) {
	if (deaccelerated) {
		invalidate();
	}
	flush();
	return !isValid();
}

void SurfaceDataProxy::flush() {
	$synchronized(this) {
		$var($SurfaceData, csd, this->cachedSD);
		$set(this, cachedSD, nullptr);
		$init($StateTracker);
		$set(this, cacheTracker, $StateTracker::NEVER_CURRENT);
		if (csd != nullptr) {
			csd->flush();
		}
	}
}

bool SurfaceDataProxy::isAccelerated() {
	bool var$1 = isValid();
	bool var$0 = var$1 && $nc(this->srcTracker)->isCurrent();
	return (var$0 && $nc(this->cacheTracker)->isCurrent());
}

void SurfaceDataProxy::activateDisplayListener() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if ($instanceOf($SunGraphicsEnvironment, ge)) {
		$nc(($cast($SunGraphicsEnvironment, ge)))->addDisplayChangedListener(this);
	}
}

void SurfaceDataProxy::displayChanged() {
	flush();
}

void SurfaceDataProxy::paletteChanged() {
	$init($StateTracker);
	$set(this, srcTracker, $StateTracker::NEVER_CURRENT);
}

$SurfaceData* SurfaceDataProxy::replaceData($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	if (isSupportedOperation(srcData, txtype, comp, bgColor)) {
		if (!$nc(this->srcTracker)->isCurrent()) {
			$synchronized(this) {
				this->numtries = this->threshold;
				$set(this, srcTracker, $nc(srcData)->getStateTracker());
				$init($StateTracker);
				$set(this, cacheTracker, $StateTracker::NEVER_CURRENT);
			}
			if (!$nc(this->srcTracker)->isCurrent()) {
				$init($StateTrackable$State);
				if ($nc(srcData)->getState() == $StateTrackable$State::UNTRACKABLE) {
					invalidate();
					flush();
				}
				return srcData;
			}
		}
		$var($SurfaceData, csd, this->cachedSD);
		if (!$nc(this->cacheTracker)->isCurrent()) {
			$synchronized(this) {
				if (this->numtries > 0) {
					--this->numtries;
					return srcData;
				}
			}
			$var($Rectangle, r, $nc(srcData)->getBounds());
			int32_t w = $nc(r)->width;
			int32_t h = r->height;
			$var($StateTracker, curTracker, this->srcTracker);
			$assign(csd, validateSurfaceData(srcData, csd, w, h));
			if (csd == nullptr) {
				$synchronized(this) {
					if (curTracker == this->srcTracker) {
						$set(this, cacheTracker, getRetryTracker(srcData));
						$set(this, cachedSD, nullptr);
					}
				}
				return srcData;
			}
			updateSurfaceData(srcData, csd, w, h);
			if (!$nc(csd)->isValid()) {
				return srcData;
			}
			$synchronized(this) {
				if (curTracker == this->srcTracker && $nc(curTracker)->isCurrent()) {
					$set(this, cacheTracker, $nc(csd)->getStateTracker());
					$set(this, cachedSD, csd);
				}
			}
		}
		if (csd != nullptr) {
			return csd;
		}
	}
	return srcData;
}

void SurfaceDataProxy::updateSurfaceData($SurfaceData* srcData, $SurfaceData* dstData, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
	$var($SurfaceType, dstType, $nc(dstData)->getSurfaceType());
	$init($CompositeType);
	$var($Blit, blit, $Blit::getFromCache(srcType, $CompositeType::SrcNoEa, dstType));
	$init($AlphaComposite);
	$nc(blit)->Blit$(srcData, dstData, $AlphaComposite::Src, nullptr, 0, 0, 0, 0, w, h);
	dstData->markDirty();
}

void SurfaceDataProxy::updateSurfaceDataBg($SurfaceData* srcData, $SurfaceData* dstData, int32_t w, int32_t h, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
	$var($SurfaceType, dstType, $nc(dstData)->getSurfaceType());
	$init($CompositeType);
	$var($BlitBg, blitbg, $BlitBg::getFromCache(srcType, $CompositeType::SrcNoEa, dstType));
	$init($AlphaComposite);
	$nc(blitbg)->BlitBg$(srcData, dstData, $AlphaComposite::Src, nullptr, $nc(bgColor)->getRGB(), 0, 0, 0, 0, w, h);
	dstData->markDirty();
}

void clinit$SurfaceDataProxy($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		SurfaceDataProxy::cachingAllowed = true;
		$var($String, manimg, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.managedimages"_s)))));
		if (manimg != nullptr && manimg->equals("false"_s)) {
			SurfaceDataProxy::cachingAllowed = false;
			$init($System);
			$nc($System::out)->println("Disabling managed images"_s);
		}
		SurfaceDataProxy::defaultThreshold = 1;
		$var($String, num, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.accthreshold"_s)))));
		if (num != nullptr) {
			try {
				int32_t parsed = $Integer::parseInt(num);
				if (parsed >= 0) {
					SurfaceDataProxy::defaultThreshold = parsed;
					$init($System);
					$nc($System::out)->println($$str({"New Default Acceleration Threshold: "_s, $$str(SurfaceDataProxy::defaultThreshold)}));
				}
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, e, $catch());
				$init($System);
				$nc($System::err)->println($$str({"Error setting new threshold:"_s, e}));
			}
		}
	}
	$assignStatic(SurfaceDataProxy::UNCACHED, $new($SurfaceDataProxy$1, 0));
}

SurfaceDataProxy::SurfaceDataProxy() {
}

$Class* SurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(SurfaceDataProxy, name, initialize, &_SurfaceDataProxy_ClassInfo_, clinit$SurfaceDataProxy, allocate$SurfaceDataProxy);
	return class$;
}

$Class* SurfaceDataProxy::class$ = nullptr;

	} // java2d
} // sun