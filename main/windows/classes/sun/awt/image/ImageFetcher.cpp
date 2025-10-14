#include <sun/awt/image/ImageFetcher.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Vector.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/image/FetcherInfo.h>
#include <sun/awt/image/ImageFetchable.h>
#include <sun/awt/image/ImageFetcher$1.h>
#include <jcpp.h>

#undef ANIM_PRIORITY
#undef HIGH_PRIORITY
#undef LOW_PRIORITY
#undef TIMEOUT

using $ThreadArray = $Array<::java::lang::Thread>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Vector = ::java::util::Vector;
using $AppContext = ::sun::awt::AppContext;
using $FetcherInfo = ::sun::awt::image::FetcherInfo;
using $ImageFetchable = ::sun::awt::image::ImageFetchable;
using $ImageFetcher$1 = ::sun::awt::image::ImageFetcher$1;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageFetcher_FieldInfo_[] = {
	{"HIGH_PRIORITY", "I", nullptr, $STATIC | $FINAL, $constField(ImageFetcher, HIGH_PRIORITY)},
	{"LOW_PRIORITY", "I", nullptr, $STATIC | $FINAL, $constField(ImageFetcher, LOW_PRIORITY)},
	{"ANIM_PRIORITY", "I", nullptr, $STATIC | $FINAL, $constField(ImageFetcher, ANIM_PRIORITY)},
	{"TIMEOUT", "I", nullptr, $STATIC | $FINAL, $constField(ImageFetcher, TIMEOUT)},
	{}
};

$MethodInfo _ImageFetcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageFetcher::*)()>(&ImageFetcher::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;I)V", nullptr, $PRIVATE, $method(static_cast<void(ImageFetcher::*)($ThreadGroup*,int32_t)>(&ImageFetcher::init$))},
	{"add", "(Lsun/awt/image/ImageFetchable;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ImageFetchable*)>(&ImageFetcher::add))},
	{"amFetcher", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ImageFetcher::amFetcher))},
	{"createFetchers", "(Lsun/awt/image/FetcherInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FetcherInfo*)>(&ImageFetcher::createFetchers))},
	{"fetchloop", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageFetcher::*)()>(&ImageFetcher::fetchloop))},
	{"isFetcher", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Thread*)>(&ImageFetcher::isFetcher))},
	{"nextImage", "()Lsun/awt/image/ImageFetchable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ImageFetchable*(*)()>(&ImageFetcher::nextImage))},
	{"remove", "(Lsun/awt/image/ImageFetchable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ImageFetchable*)>(&ImageFetcher::remove))},
	{"run", "()V", nullptr, $PUBLIC},
	{"startingAnimation", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ImageFetcher::startingAnimation))},
	{"stoppingAnimation", "(Ljava/lang/Thread;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Thread*)>(&ImageFetcher::stoppingAnimation))},
	{}
};

$InnerClassInfo _ImageFetcher_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageFetcher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageFetcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageFetcher",
	"java.lang.Thread",
	nullptr,
	_ImageFetcher_FieldInfo_,
	_ImageFetcher_MethodInfo_,
	nullptr,
	nullptr,
	_ImageFetcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.ImageFetcher$1"
};

$Object* allocate$ImageFetcher($Class* clazz) {
	return $of($alloc(ImageFetcher));
}

void ImageFetcher::init$() {
	$Thread::init$();
	$throwNew($UnsupportedOperationException, "Must erase locals"_s);
}

void ImageFetcher::init$($ThreadGroup* threadGroup, int32_t index) {
	$Thread::init$(threadGroup, nullptr, $$str({"Image Fetcher "_s, $$str(index)}), 0, false);
	setDaemon(true);
}

bool ImageFetcher::add($ImageFetchable* src) {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$synchronized($nc(info)->waitList) {
		if (!$nc(info->waitList)->contains(src)) {
			$nc(info->waitList)->addElement(src);
			if (info->numWaiting == 0 && info->numFetchers < $nc(info->fetchers)->length) {
				createFetchers(info);
			}
			if (info->numFetchers > 0) {
				$nc($of(info->waitList))->notify();
			} else {
				$nc(info->waitList)->removeElement(src);
				return false;
			}
		}
	}
	return true;
}

void ImageFetcher::remove($ImageFetchable* src) {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$synchronized($nc(info)->waitList) {
		if ($nc(info->waitList)->contains(src)) {
			$nc(info->waitList)->removeElement(src);
		}
	}
}

bool ImageFetcher::isFetcher($Thread* t) {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$synchronized($nc(info)->waitList) {
		for (int32_t i = 0; i < $nc(info->fetchers)->length; ++i) {
			if ($nc(info->fetchers)->get(i) == t) {
				return true;
			}
		}
	}
	return false;
}

bool ImageFetcher::amFetcher() {
	$init(ImageFetcher);
	return isFetcher($($Thread::currentThread()));
}

$ImageFetchable* ImageFetcher::nextImage() {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$synchronized($nc(info)->waitList) {
		$var($ImageFetchable, src, nullptr);
		int64_t end = $System::currentTimeMillis() + ImageFetcher::TIMEOUT;
		while (src == nullptr) {
			while ($nc(info->waitList)->size() == 0) {
				int64_t now = $System::currentTimeMillis();
				if (now >= end) {
					return nullptr;
				}
				{
					$var($Throwable, var$0, nullptr);
					$var($ImageFetchable, var$2, nullptr);
					bool return$1 = false;
					try {
						try {
							++info->numWaiting;
							$nc($of(info->waitList))->wait(end - now);
						} catch ($InterruptedException&) {
							$var($InterruptedException, e, $catch());
							$assign(var$2, nullptr);
							return$1 = true;
							goto $finally;
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} $finally: {
						--info->numWaiting;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
					if (return$1) {
						return var$2;
					}
				}
			}
			$assign(src, $cast($ImageFetchable, $nc(info->waitList)->elementAt(0)));
			$nc(info->waitList)->removeElement(src);
		}
		return src;
	}
}

void ImageFetcher::run() {
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				fetchloop();
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				e->printStackTrace();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$synchronized($nc(info)->waitList) {
				$var($Thread, me, $Thread::currentThread());
				for (int32_t i = 0; i < $nc(info->fetchers)->length; ++i) {
					if ($nc(info->fetchers)->get(i) == me) {
						$nc(info->fetchers)->set(i, nullptr);
						--info->numFetchers;
					}
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ImageFetcher::fetchloop() {
	$var($Thread, me, $Thread::currentThread());
	while (isFetcher(me)) {
		$Thread::interrupted();
		me->setPriority(ImageFetcher::HIGH_PRIORITY);
		$var($ImageFetchable, src, nextImage());
		if (src == nullptr) {
			return;
		}
		try {
			$nc(src)->doFetch();
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($System);
			$nc($System::err)->println("Uncaught error fetching image:"_s);
			e->printStackTrace();
		}
		stoppingAnimation(me);
	}
}

void ImageFetcher::startingAnimation() {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$var($Thread, me, $Thread::currentThread());
	$synchronized($nc(info)->waitList) {
		for (int32_t i = 0; i < $nc(info->fetchers)->length; ++i) {
			if ($nc(info->fetchers)->get(i) == me) {
				$nc(info->fetchers)->set(i, nullptr);
				--info->numFetchers;
				me->setName($$str({"Image Animator "_s, $$str(i)}));
				if ($nc(info->waitList)->size() > info->numWaiting) {
					createFetchers(info);
				}
				return;
			}
		}
	}
	me->setPriority(ImageFetcher::ANIM_PRIORITY);
	me->setName("Image Animator"_s);
}

void ImageFetcher::stoppingAnimation($Thread* me) {
	$init(ImageFetcher);
	$var($FetcherInfo, info, $FetcherInfo::getFetcherInfo());
	$synchronized($nc(info)->waitList) {
		int32_t index = -1;
		for (int32_t i = 0; i < $nc(info->fetchers)->length; ++i) {
			if ($nc(info->fetchers)->get(i) == me) {
				return;
			}
			if ($nc(info->fetchers)->get(i) == nullptr) {
				index = i;
			}
		}
		if (index >= 0) {
			$nc(info->fetchers)->set(index, me);
			++info->numFetchers;
			$nc(me)->setName($$str({"Image Fetcher "_s, $$str(index)}));
			return;
		}
	}
}

void ImageFetcher::createFetchers($FetcherInfo* info) {
	$init(ImageFetcher);
	$beforeCallerSensitive();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var($ThreadGroup, threadGroup, $nc(appContext)->getThreadGroup());
	$var($ThreadGroup, fetcherThreadGroup, nullptr);
	try {
		if ($nc(threadGroup)->getParent() != nullptr) {
			$assign(fetcherThreadGroup, threadGroup);
		} else {
			$assign(threadGroup, $($Thread::currentThread())->getThreadGroup());
			$var($ThreadGroup, parent, $nc(threadGroup)->getParent());
			while ((parent != nullptr) && (parent->getParent() != nullptr)) {
				$assign(threadGroup, parent);
				$assign(parent, threadGroup->getParent());
			}
			$assign(fetcherThreadGroup, threadGroup);
		}
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		$assign(fetcherThreadGroup, appContext->getThreadGroup());
	}
	$var($ThreadGroup, fetcherGroup, fetcherThreadGroup);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ImageFetcher$1, info, fetcherGroup)));
	return;
}

ImageFetcher::ImageFetcher() {
}

$Class* ImageFetcher::load$($String* name, bool initialize) {
	$loadClass(ImageFetcher, name, initialize, &_ImageFetcher_ClassInfo_, allocate$ImageFetcher);
	return class$;
}

$Class* ImageFetcher::class$ = nullptr;

		} // image
	} // awt
} // sun