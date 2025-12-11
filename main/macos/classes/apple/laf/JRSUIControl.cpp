#include <apple/laf/JRSUIControl.h>

#include <apple/laf/JRSUIConstants$DoubleValue.h>
#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIConstants.h>
#include <apple/laf/JRSUIControl$BufferState.h>
#include <apple/laf/JRSUIControl$ThreadLocalByteBuffer.h>
#include <apple/laf/JRSUIState.h>
#include <java/lang/ThreadLocal.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ALL_CHANGES_IN_BUFFER
#undef CHANGE_WONT_FIT_IN_BUFFER
#undef INCOHERENT
#undef NIO_BUFFER_SIZE
#undef NOT_INIT
#undef NULL_CG_REF
#undef NULL_PTR
#undef SOME_CHANGES_IN_BUFFER
#undef SUCCESS

using $JRSUIConstants = ::apple::laf::JRSUIConstants;
using $JRSUIConstants$DoubleValue = ::apple::laf::JRSUIConstants$DoubleValue;
using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl$BufferState = ::apple::laf::JRSUIControl$BufferState;
using $JRSUIControl$ThreadLocalByteBuffer = ::apple::laf::JRSUIControl$ThreadLocalByteBuffer;
using $JRSUIState = ::apple::laf::JRSUIState;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIControl_FieldInfo_[] = {
	{"INCOHERENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, INCOHERENT)},
	{"NOT_INIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, NOT_INIT)},
	{"SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, SUCCESS)},
	{"NULL_PTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, NULL_PTR)},
	{"NULL_CG_REF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, NULL_CG_REF)},
	{"nativeJRSInitialized", "I", nullptr, $PRIVATE | $STATIC, $staticField(JRSUIControl, nativeJRSInitialized)},
	{"NIO_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIControl, NIO_BUFFER_SIZE)},
	{"threadLocal", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lapple/laf/JRSUIControl$ThreadLocalByteBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIControl, threadLocal)},
	{"nativeMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lapple/laf/JRSUIConstants$Key;Lapple/laf/JRSUIConstants$DoubleValue;>;", $PRIVATE | $FINAL, $field(JRSUIControl, nativeMap)},
	{"changes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lapple/laf/JRSUIConstants$Key;Lapple/laf/JRSUIConstants$DoubleValue;>;", $PRIVATE | $FINAL, $field(JRSUIControl, changes)},
	{"cfDictionaryPtr", "J", nullptr, $PRIVATE, $field(JRSUIControl, cfDictionaryPtr)},
	{"priorEncodedProperties", "J", nullptr, $PRIVATE, $field(JRSUIControl, priorEncodedProperties)},
	{"currentEncodedProperties", "J", nullptr, $PRIVATE, $field(JRSUIControl, currentEncodedProperties)},
	{"flipped", "Z", nullptr, $PRIVATE | $FINAL, $field(JRSUIControl, flipped)},
	{}
};

$MethodInfo _JRSUIControl_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIControl::*)(bool)>(&JRSUIControl::init$))},
	{"<init>", "(Lapple/laf/JRSUIControl;)V", nullptr, 0, $method(static_cast<void(JRSUIControl::*)(JRSUIControl*)>(&JRSUIControl::init$))},
	{"disposeCFDictionary", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&JRSUIControl::disposeCFDictionary))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.lang.Throwable"},
	{"getCFDictionary", "(Z)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(bool)>(&JRSUIControl::getCFDictionary))},
	{"getHitForPoint", "(IIIIII)Lapple/laf/JRSUIConstants$Hit;", nullptr, 0, $method(static_cast<$JRSUIConstants$Hit*(JRSUIControl::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JRSUIControl::getHitForPoint))},
	{"getNativeHitPart", "(JJJDDDDDD)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,double,double,double,double,double,double)>(&JRSUIControl::getNativeHitPart))},
	{"getNativePartBounds", "([DJJJDDDDI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($doubles*,int64_t,int64_t,int64_t,double,double,double,double,int32_t)>(&JRSUIControl::getNativePartBounds))},
	{"getNativeScrollBarOffsetChange", "(JJJDDDDIII)D", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<double(*)(int64_t,int64_t,int64_t,double,double,double,double,int32_t,int32_t,int32_t)>(&JRSUIControl::getNativeScrollBarOffsetChange))},
	{"getPartBounds", "([DIIIII)V", nullptr, 0, $method(static_cast<void(JRSUIControl::*)($doubles*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JRSUIControl::getPartBounds))},
	{"getPtrOfBuffer", "(Ljava/nio/ByteBuffer;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($ByteBuffer*)>(&JRSUIControl::getPtrOfBuffer))},
	{"getScrollBarOffsetChange", "(IIIIIII)D", nullptr, 0, $method(static_cast<double(JRSUIControl::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JRSUIControl::getScrollBarOffsetChange))},
	{"getThreadLocalBuffer", "()Lapple/laf/JRSUIControl$ThreadLocalByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JRSUIControl$ThreadLocalByteBuffer*(*)()>(&JRSUIControl::getThreadLocalBuffer))},
	{"handleBufferOverflow", "(Ljava/nio/ByteBuffer;I)Lapple/laf/JRSUIControl$BufferState;", nullptr, $PRIVATE, $method(static_cast<$JRSUIControl$BufferState*(JRSUIControl::*)($ByteBuffer*,int32_t)>(&JRSUIControl::handleBufferOverflow))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initJRSUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&JRSUIControl::initJRSUI))},
	{"initNativeJRSUI", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&JRSUIControl::initNativeJRSUI))},
	{"loadBufferWithChanges", "(Lapple/laf/JRSUIControl$ThreadLocalByteBuffer;)Lapple/laf/JRSUIControl$BufferState;", nullptr, $PRIVATE, $method(static_cast<$JRSUIControl$BufferState*(JRSUIControl::*)($JRSUIControl$ThreadLocalByteBuffer*)>(&JRSUIControl::loadBufferWithChanges))},
	{"paint", "([IIIDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIControl::*)($ints*,int32_t,int32_t,double,double,double,double)>(&JRSUIControl::paint))},
	{"paint", "(JDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIControl::*)(int64_t,double,double,double,double)>(&JRSUIControl::paint))},
	{"paintChangesImage", "([IIIJJJDDDDJ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,int64_t,int64_t,int64_t,double,double,double,double,int64_t)>(&JRSUIControl::paintChangesImage))},
	{"paintChangesToCGContext", "(JJJJDDDDJ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,double,double,double,double,int64_t)>(&JRSUIControl::paintChangesToCGContext))},
	{"paintImage", "([IIIJJJDDDD)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,int64_t,int64_t,int64_t,double,double,double,double)>(&JRSUIControl::paintImage))},
	{"paintImage", "([IIIDDDD)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(JRSUIControl::*)($ints*,int32_t,int32_t,double,double,double,double)>(&JRSUIControl::paintImage))},
	{"paintToCGContext", "(JJJJDDDD)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,double,double,double,double)>(&JRSUIControl::paintToCGContext))},
	{"paintToCGContext", "(JDDDD)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(JRSUIControl::*)(int64_t,double,double,double,double)>(&JRSUIControl::paintToCGContext))},
	{"set", "(Lapple/laf/JRSUIConstants$Key;Lapple/laf/JRSUIConstants$DoubleValue;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JRSUIControl::*)($JRSUIConstants$Key*,$JRSUIConstants$DoubleValue*)>(&JRSUIControl::set))},
	{"set", "(Lapple/laf/JRSUIState;)V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIControl::*)($JRSUIState*)>(&JRSUIControl::set))},
	{"set", "(Lapple/laf/JRSUIConstants$Key;D)V", nullptr, 0, $method(static_cast<void(JRSUIControl::*)($JRSUIConstants$Key*,double)>(&JRSUIControl::set))},
	{"setEncodedState", "(J)V", nullptr, 0, $method(static_cast<void(JRSUIControl::*)(int64_t)>(&JRSUIControl::setEncodedState))},
	{"sync", "()V", nullptr, $PRIVATE, $method(static_cast<void(JRSUIControl::*)()>(&JRSUIControl::sync))},
	{"syncChanges", "(JJ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&JRSUIControl::syncChanges))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_disposeCFDictionary 2
#define _METHOD_INDEX_getCFDictionary 5
#define _METHOD_INDEX_getNativeHitPart 7
#define _METHOD_INDEX_getNativePartBounds 8
#define _METHOD_INDEX_getNativeScrollBarOffsetChange 9
#define _METHOD_INDEX_getPtrOfBuffer 11
#define _METHOD_INDEX_initNativeJRSUI 17
#define _METHOD_INDEX_paintChangesImage 21
#define _METHOD_INDEX_paintChangesToCGContext 22
#define _METHOD_INDEX_paintImage 23
#define _METHOD_INDEX_paintToCGContext 25
#define _METHOD_INDEX_syncChanges 32

$InnerClassInfo _JRSUIControl_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIControl$BufferState", "apple.laf.JRSUIControl", "BufferState", $STATIC | $FINAL | $ENUM},
	{"apple.laf.JRSUIControl$ThreadLocalByteBuffer", "apple.laf.JRSUIControl", "ThreadLocalByteBuffer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JRSUIControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"apple.laf.JRSUIControl",
	"java.lang.Object",
	nullptr,
	_JRSUIControl_FieldInfo_,
	_JRSUIControl_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"apple.laf.JRSUIControl$BufferState,apple.laf.JRSUIControl$ThreadLocalByteBuffer"
};

$Object* allocate$JRSUIControl($Class* clazz) {
	return $of($alloc(JRSUIControl));
}

int32_t JRSUIControl::nativeJRSInitialized = 0;
$ThreadLocal* JRSUIControl::threadLocal = nullptr;

int32_t JRSUIControl::initNativeJRSUI() {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, initNativeJRSUI, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int64_t JRSUIControl::getPtrOfBuffer($ByteBuffer* byteBuffer) {
	$init(JRSUIControl);
	int64_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, getPtrOfBuffer, int64_t, $ByteBuffer* byteBuffer);
	$ret = $invokeNativeStatic(byteBuffer);
	$finishNativeStatic();
	return $ret;
}

int64_t JRSUIControl::getCFDictionary(bool flipped) {
	$init(JRSUIControl);
	int64_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, getCFDictionary, int64_t, bool flipped);
	$ret = $invokeNativeStatic(flipped);
	$finishNativeStatic();
	return $ret;
}

void JRSUIControl::disposeCFDictionary(int64_t cfDictionaryPtr) {
	$init(JRSUIControl);
	$prepareNativeStatic(JRSUIControl, disposeCFDictionary, void, int64_t cfDictionaryPtr);
	$invokeNativeStatic(cfDictionaryPtr);
	$finishNativeStatic();
}

int32_t JRSUIControl::syncChanges(int64_t cfDictionaryPtr, int64_t byteBufferPtr) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, syncChanges, int32_t, int64_t cfDictionaryPtr, int64_t byteBufferPtr);
	$ret = $invokeNativeStatic(cfDictionaryPtr, byteBufferPtr);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIControl::paintToCGContext(int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, paintToCGContext, int32_t, int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h);
	$ret = $invokeNativeStatic(cgContext, cfDictionaryPtr, oldProperties, newProperties, x, y, w, h);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIControl::paintChangesToCGContext(int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, paintChangesToCGContext, int32_t, int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr);
	$ret = $invokeNativeStatic(cgContext, cfDictionaryPtr, oldProperties, newProperties, x, y, w, h, byteBufferPtr);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIControl::paintImage($ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, paintImage, int32_t, $ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h);
	$ret = $invokeNativeStatic(data, imgW, imgH, cfDictionaryPtr, oldProperties, newProperties, x, y, w, h);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIControl::paintChangesImage($ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, paintChangesImage, int32_t, $ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr);
	$ret = $invokeNativeStatic(data, imgW, imgH, cfDictionaryPtr, oldProperties, newProperties, x, y, w, h, byteBufferPtr);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIControl::getNativeHitPart(int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, double hitX, double hitY) {
	$init(JRSUIControl);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIControl, getNativeHitPart, int32_t, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, double hitX, double hitY);
	$ret = $invokeNativeStatic(cfDictionaryPtr, oldProperties, newProperties, x, y, w, h, hitX, hitY);
	$finishNativeStatic();
	return $ret;
}

void JRSUIControl::getNativePartBounds($doubles* rect, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t part) {
	$init(JRSUIControl);
	$prepareNativeStatic(JRSUIControl, getNativePartBounds, void, $doubles* rect, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t part);
	$invokeNativeStatic(rect, cfDictionaryPtr, oldProperties, newProperties, x, y, w, h, part);
	$finishNativeStatic();
}

double JRSUIControl::getNativeScrollBarOffsetChange(int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t offset, int32_t visibleAmount, int32_t extent) {
	$init(JRSUIControl);
	double $ret = 0.0;
	$prepareNativeStatic(JRSUIControl, getNativeScrollBarOffsetChange, double, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t offset, int32_t visibleAmount, int32_t extent);
	$ret = $invokeNativeStatic(cfDictionaryPtr, oldProperties, newProperties, x, y, w, h, offset, visibleAmount, extent);
	$finishNativeStatic();
	return $ret;
}

void JRSUIControl::initJRSUI() {
	$init(JRSUIControl);
	$useLocalCurrentObjectStackCache();
	if (JRSUIControl::nativeJRSInitialized == JRSUIControl::SUCCESS) {
		return;
	}
	JRSUIControl::nativeJRSInitialized = initNativeJRSUI();
	if (JRSUIControl::nativeJRSInitialized != JRSUIControl::SUCCESS) {
		$throwNew($RuntimeException, $$str({"JRSUI could not be initialized ("_s, $$str(JRSUIControl::nativeJRSInitialized), ")."_s}));
	}
}

$JRSUIControl$ThreadLocalByteBuffer* JRSUIControl::getThreadLocalBuffer() {
	$init(JRSUIControl);
	$var($JRSUIControl$ThreadLocalByteBuffer, byteBuffer, $cast($JRSUIControl$ThreadLocalByteBuffer, $nc(JRSUIControl::threadLocal)->get()));
	if (byteBuffer != nullptr) {
		return byteBuffer;
	}
	$assign(byteBuffer, $new($JRSUIControl$ThreadLocalByteBuffer));
	$nc(JRSUIControl::threadLocal)->set(byteBuffer);
	return byteBuffer;
}

void JRSUIControl::init$(bool flipped) {
	this->flipped = flipped;
	this->cfDictionaryPtr = getCFDictionary(flipped);
	if (this->cfDictionaryPtr == 0) {
		$throwNew($RuntimeException, "Unable to create native representation"_s);
	}
	$set(this, nativeMap, $new($HashMap));
	$set(this, changes, $new($HashMap));
}

void JRSUIControl::init$(JRSUIControl* other) {
	this->flipped = $nc(other)->flipped;
	this->cfDictionaryPtr = getCFDictionary(this->flipped);
	if (this->cfDictionaryPtr == 0) {
		$throwNew($RuntimeException, "Unable to create native representation"_s);
	}
	$set(this, nativeMap, $new($HashMap));
	$set(this, changes, $new($HashMap, static_cast<$Map*>(other->nativeMap)));
	$nc(this->changes)->putAll(other->changes);
}

void JRSUIControl::finalize() {
	$synchronized(this) {
		if (this->cfDictionaryPtr == 0) {
			return;
		}
		disposeCFDictionary(this->cfDictionaryPtr);
		this->cfDictionaryPtr = 0;
	}
}

$JRSUIControl$BufferState* JRSUIControl::loadBufferWithChanges($JRSUIControl$ThreadLocalByteBuffer* localByteBuffer) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, $nc(localByteBuffer)->buffer);
	$nc(buffer)->rewind();
	{
		$var($Iterator, i$, $$new($HashSet, $(static_cast<$Collection*>($nc(this->changes)->keySet())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JRSUIConstants$Key, key, $cast($JRSUIConstants$Key, i$->next()));
			{
				int32_t changeIndex = buffer->position();
				$var($JRSUIConstants$DoubleValue, value, $cast($JRSUIConstants$DoubleValue, $nc(this->changes)->get(key)));
				try {
					buffer->putLong($nc(key)->getConstantPtr());
					buffer->put($nc(value)->getTypeCode());
					$nc(value)->putValueInBuffer(buffer);
				} catch ($BufferOverflowException& e) {
					return handleBufferOverflow(buffer, changeIndex);
				} catch ($RuntimeException& e) {
					$nc($System::err)->println($of(this));
					$throw(e);
				}
				if (buffer->position() >= JRSUIControl::NIO_BUFFER_SIZE - 8) {
					return handleBufferOverflow(buffer, changeIndex);
				}
				$nc(this->changes)->remove(key);
				$nc(this->nativeMap)->put(key, value);
			}
		}
	}
	buffer->putLong(0);
	$init($JRSUIControl$BufferState);
	return $JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER;
}

$JRSUIControl$BufferState* JRSUIControl::handleBufferOverflow($ByteBuffer* buffer, int32_t changeIndex) {
	if (changeIndex == 0) {
		$nc(buffer)->putLong(0, 0);
		$init($JRSUIControl$BufferState);
		return $JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER;
	}
	$nc(buffer)->putLong(changeIndex, 0);
	$init($JRSUIControl$BufferState);
	return $JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER;
}

void JRSUIControl::set($JRSUIConstants$Key* key, $JRSUIConstants$DoubleValue* value) {
	$synchronized(this) {
		$var($JRSUIConstants$DoubleValue, existingValue, $cast($JRSUIConstants$DoubleValue, $nc(this->nativeMap)->get(key)));
		if (existingValue != nullptr && existingValue->equals(value)) {
			$nc(this->changes)->remove(key);
			return;
		}
		$nc(this->changes)->put(key, value);
	}
}

void JRSUIControl::set($JRSUIState* state) {
	$nc(state)->apply(this);
}

void JRSUIControl::setEncodedState(int64_t state) {
	this->currentEncodedProperties = state;
}

void JRSUIControl::set($JRSUIConstants$Key* key, double value) {
	set(key, $$new($JRSUIConstants$DoubleValue, value));
}

void JRSUIControl::paint($ints* data, int32_t imgW, int32_t imgH, double x, double y, double w, double h) {
	paintImage(data, imgW, imgH, x, y, w, h);
	this->priorEncodedProperties = this->currentEncodedProperties;
}

int32_t JRSUIControl::paintImage($ints* data, int32_t imgW, int32_t imgH, double x, double y, double w, double h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->changes)->isEmpty()) {
			return paintImage(data, imgW, imgH, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h);
		}
		$var($JRSUIControl$ThreadLocalByteBuffer, localByteBuffer, getThreadLocalBuffer());
		$JRSUIControl$BufferState* bufferState = loadBufferWithChanges(localByteBuffer);
		$init($JRSUIControl$BufferState);
		if (bufferState == $JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER) {
			return paintChangesImage(data, imgW, imgH, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h, $nc(localByteBuffer)->ptr);
		}
		while (bufferState == $JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER) {
			int32_t status = syncChanges(this->cfDictionaryPtr, $nc(localByteBuffer)->ptr);
			if (status != JRSUIControl::SUCCESS) {
				$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes into the native buffer: "_s, this}));
			}
			bufferState = loadBufferWithChanges(localByteBuffer);
		}
		if (bufferState == $JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER) {
			$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes to the native buffer, because some change was too big: "_s, this}));
		}
		return paintChangesImage(data, imgW, imgH, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h, $nc(localByteBuffer)->ptr);
	}
}

void JRSUIControl::paint(int64_t cgContext, double x, double y, double w, double h) {
	paintToCGContext(cgContext, x, y, w, h);
	this->priorEncodedProperties = this->currentEncodedProperties;
}

int32_t JRSUIControl::paintToCGContext(int64_t cgContext, double x, double y, double w, double h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->changes)->isEmpty()) {
			return paintToCGContext(cgContext, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h);
		}
		$var($JRSUIControl$ThreadLocalByteBuffer, localByteBuffer, getThreadLocalBuffer());
		$JRSUIControl$BufferState* bufferState = loadBufferWithChanges(localByteBuffer);
		$init($JRSUIControl$BufferState);
		if (bufferState == $JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER) {
			return paintChangesToCGContext(cgContext, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h, $nc(localByteBuffer)->ptr);
		}
		while (bufferState == $JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER) {
			int32_t status = syncChanges(this->cfDictionaryPtr, $nc(localByteBuffer)->ptr);
			if (status != JRSUIControl::SUCCESS) {
				$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes into the native buffer: "_s, this}));
			}
			bufferState = loadBufferWithChanges(localByteBuffer);
		}
		if (bufferState == $JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER) {
			$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes to the native buffer, because some change was too big: "_s, this}));
		}
		return paintChangesToCGContext(cgContext, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, x, y, w, h, $nc(localByteBuffer)->ptr);
	}
}

$JRSUIConstants$Hit* JRSUIControl::getHitForPoint(int32_t x, int32_t y, int32_t w, int32_t h, int32_t hitX, int32_t hitY) {
	sync();
	$var($JRSUIConstants$Hit, hit, $JRSUIConstants::getHit(getNativeHitPart(this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, (double)x, (double)y, (double)w, (double)h, (double)hitX, (double)(2 * y + h - hitY))));
	this->priorEncodedProperties = this->currentEncodedProperties;
	return hit;
}

void JRSUIControl::getPartBounds($doubles* rect, int32_t x, int32_t y, int32_t w, int32_t h, int32_t part) {
	if (rect == nullptr) {
		$throwNew($NullPointerException, "Cannot load null rect"_s);
	}
	if ($nc(rect)->length != 4) {
		$throwNew($IllegalArgumentException, "Rect must have four elements"_s);
	}
	sync();
	getNativePartBounds(rect, this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, (double)x, (double)y, (double)w, (double)h, part);
	this->priorEncodedProperties = this->currentEncodedProperties;
}

double JRSUIControl::getScrollBarOffsetChange(int32_t x, int32_t y, int32_t w, int32_t h, int32_t offset, int32_t visibleAmount, int32_t extent) {
	sync();
	double offsetChange = getNativeScrollBarOffsetChange(this->cfDictionaryPtr, this->priorEncodedProperties, this->currentEncodedProperties, (double)x, (double)y, (double)w, (double)h, offset, visibleAmount, extent);
	this->priorEncodedProperties = this->currentEncodedProperties;
	return offsetChange;
}

void JRSUIControl::sync() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->changes)->isEmpty()) {
		return;
	}
	$var($JRSUIControl$ThreadLocalByteBuffer, localByteBuffer, getThreadLocalBuffer());
	$JRSUIControl$BufferState* bufferState = loadBufferWithChanges(localByteBuffer);
	$init($JRSUIControl$BufferState);
	if (bufferState == $JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER) {
		int32_t status = syncChanges(this->cfDictionaryPtr, $nc(localByteBuffer)->ptr);
		if (status != JRSUIControl::SUCCESS) {
			$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes into the native buffer: "_s, this}));
		}
		return;
	}
	while (bufferState == $JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER) {
		int32_t status = syncChanges(this->cfDictionaryPtr, $nc(localByteBuffer)->ptr);
		if (status != JRSUIControl::SUCCESS) {
			$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes into the native buffer: "_s, this}));
		}
		bufferState = loadBufferWithChanges(localByteBuffer);
	}
	if (bufferState == $JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER) {
		$throwNew($RuntimeException, $$str({"JRSUI failed to sync changes to the native buffer, because some change was too big: "_s, this}));
	}
}

int32_t JRSUIControl::hashCode() {
	int32_t bits = (int32_t)(this->currentEncodedProperties ^ ((int64_t)((uint64_t)this->currentEncodedProperties >> 32)));
	bits ^= $nc(this->nativeMap)->hashCode();
	bits ^= $nc(this->changes)->hashCode();
	return bits;
}

bool JRSUIControl::equals(Object$* obj) {
	if (!($instanceOf(JRSUIControl, obj))) {
		return false;
	}
	$var(JRSUIControl, other, $cast(JRSUIControl, obj));
	if (this->currentEncodedProperties != $nc(other)->currentEncodedProperties) {
		return false;
	}
	if (!$nc(this->nativeMap)->equals($nc(other)->nativeMap)) {
		return false;
	}
	if (!$nc(this->changes)->equals($nc(other)->changes)) {
		return false;
	}
	return true;
}

$String* JRSUIControl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder, "JRSUIControl[inNative:"_s));
	builder->append($($Arrays::toString($($nc($($nc(this->nativeMap)->entrySet()))->toArray()))));
	builder->append(", changes:"_s);
	builder->append($($Arrays::toString($($nc($($nc(this->changes)->entrySet()))->toArray()))));
	builder->append("]"_s);
	return builder->toString();
}

void clinit$JRSUIControl($Class* class$) {
	JRSUIControl::nativeJRSInitialized = JRSUIControl::NOT_INIT;
	$assignStatic(JRSUIControl::threadLocal, $new($ThreadLocal));
}

JRSUIControl::JRSUIControl() {
}

$Class* JRSUIControl::load$($String* name, bool initialize) {
	$loadClass(JRSUIControl, name, initialize, &_JRSUIControl_ClassInfo_, clinit$JRSUIControl, allocate$JRSUIControl);
	return class$;
}

$Class* JRSUIControl::class$ = nullptr;

	} // laf
} // apple