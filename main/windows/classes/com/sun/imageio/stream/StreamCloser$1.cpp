#include <com/sun/imageio/stream/StreamCloser$1.h>

#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <com/sun/imageio/stream/StreamCloser.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $StreamCloser$CloseActionArray = $Array<::com::sun::imageio::stream::StreamCloser$CloseAction>;
using $StreamCloser = ::com::sun::imageio::stream::StreamCloser;
using $StreamCloser$CloseAction = ::com::sun::imageio::stream::StreamCloser$CloseAction;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

$MethodInfo _StreamCloser$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamCloser$1::*)()>(&StreamCloser$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StreamCloser$1_EnclosingMethodInfo_ = {
	"com.sun.imageio.stream.StreamCloser",
	"addToQueue",
	"(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V"
};

$InnerClassInfo _StreamCloser$1_InnerClassesInfo_[] = {
	{"com.sun.imageio.stream.StreamCloser$1", nullptr, nullptr, 0},
	{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamCloser$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.stream.StreamCloser$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_StreamCloser$1_MethodInfo_,
	nullptr,
	&_StreamCloser$1_EnclosingMethodInfo_,
	_StreamCloser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.stream.StreamCloser"
};

$Object* allocate$StreamCloser$1($Class* clazz) {
	return $of($alloc(StreamCloser$1));
}

void StreamCloser$1::init$() {
}

void StreamCloser$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($StreamCloser);
	if ($StreamCloser::toCloseQueue != nullptr) {
		$synchronized($StreamCloser::class$) {
			$var($Set, set, $nc($StreamCloser::toCloseQueue)->keySet());
			$var($StreamCloser$CloseActionArray, actions, $new($StreamCloser$CloseActionArray, $nc(set)->size()));
			$assign(actions, $fcast($StreamCloser$CloseActionArray, set->toArray(actions)));
			{
				$var($StreamCloser$CloseActionArray, arr$, actions);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StreamCloser$CloseAction, ca, arr$->get(i$));
					{
						if (ca != nullptr) {
							try {
								ca->performAction();
							} catch ($IOException&) {
								$catch();
							}
						}
					}
				}
			}
		}
	}
}

StreamCloser$1::StreamCloser$1() {
}

$Class* StreamCloser$1::load$($String* name, bool initialize) {
	$loadClass(StreamCloser$1, name, initialize, &_StreamCloser$1_ClassInfo_, allocate$StreamCloser$1);
	return class$;
}

$Class* StreamCloser$1::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com