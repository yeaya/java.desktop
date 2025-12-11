#include <sun/font/SunLayoutEngine.h>

#include <java/awt/geom/Point2D$Float.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/GlyphLayout$GVData.h>
#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout$LayoutEngineKey.h>
#include <sun/font/SunLayoutEngine$FaceRef.h>
#include <sun/font/TextRecord.h>
#include <jcpp.h>

using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $Font2D = ::sun::font::Font2D;
using $FontManagerNativeLibrary = ::sun::font::FontManagerNativeLibrary;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $GlyphLayout$GVData = ::sun::font::GlyphLayout$GVData;
using $GlyphLayout$LayoutEngine = ::sun::font::GlyphLayout$LayoutEngine;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $GlyphLayout$LayoutEngineKey = ::sun::font::GlyphLayout$LayoutEngineKey;
using $SunLayoutEngine$FaceRef = ::sun::font::SunLayoutEngine$FaceRef;
using $TextRecord = ::sun::font::TextRecord;

namespace sun {
	namespace font {

class SunLayoutEngine$$Lambda$FaceRef : public $Function {
	$class(SunLayoutEngine$$Lambda$FaceRef, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* font) override {
		 return $of($new($SunLayoutEngine$FaceRef, $cast($Font2D, font)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunLayoutEngine$$Lambda$FaceRef>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SunLayoutEngine$$Lambda$FaceRef::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunLayoutEngine$$Lambda$FaceRef::*)()>(&SunLayoutEngine$$Lambda$FaceRef::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunLayoutEngine$$Lambda$FaceRef::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.SunLayoutEngine$$Lambda$FaceRef",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* SunLayoutEngine$$Lambda$FaceRef::load$($String* name, bool initialize) {
	$loadClass(SunLayoutEngine$$Lambda$FaceRef, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunLayoutEngine$$Lambda$FaceRef::class$ = nullptr;

$FieldInfo _SunLayoutEngine_FieldInfo_[] = {
	{"key", "Lsun/font/GlyphLayout$LayoutEngineKey;", nullptr, $PRIVATE, $field(SunLayoutEngine, key)},
	{"instance", "Lsun/font/GlyphLayout$LayoutEngineFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SunLayoutEngine, instance$)},
	{"cacheref", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/concurrent/ConcurrentHashMap<Lsun/font/GlyphLayout$LayoutEngineKey;Lsun/font/GlyphLayout$LayoutEngine;>;>;", $PRIVATE, $field(SunLayoutEngine, cacheref)},
	{"facePtr", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lsun/font/Font2D;Lsun/font/SunLayoutEngine$FaceRef;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SunLayoutEngine, facePtr)},
	{}
};

$MethodInfo _SunLayoutEngine_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunLayoutEngine::*)()>(&SunLayoutEngine::init$))},
	{"<init>", "(Lsun/font/GlyphLayout$LayoutEngineKey;)V", nullptr, $PRIVATE, $method(static_cast<void(SunLayoutEngine::*)($GlyphLayout$LayoutEngineKey*)>(&SunLayoutEngine::init$))},
	{"createFace", "(Lsun/font/Font2D;J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($Font2D*,int64_t)>(&SunLayoutEngine::createFace))},
	{"disposeFace", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&SunLayoutEngine::disposeFace))},
	{"getEngine", "(Lsun/font/Font2D;II)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC},
	{"getEngine", "(Lsun/font/GlyphLayout$LayoutEngineKey;)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC},
	{"getFacePtr", "(Lsun/font/Font2D;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(SunLayoutEngine::*)($Font2D*)>(&SunLayoutEngine::getFacePtr))},
	{"instance", "()Lsun/font/GlyphLayout$LayoutEngineFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GlyphLayout$LayoutEngineFactory*(*)()>(&SunLayoutEngine::instance))},
	{"layout", "(Lsun/font/FontStrikeDesc;[FFIILsun/font/TextRecord;ILjava/awt/geom/Point2D$Float;Lsun/font/GlyphLayout$GVData;)V", nullptr, $PUBLIC},
	{"shape", "(Lsun/font/Font2D;Lsun/font/FontStrike;F[FJ[CLsun/font/GlyphLayout$GVData;IIIILjava/awt/geom/Point2D$Float;II)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($Font2D*,$FontStrike*,float,$floats*,int64_t,$chars*,$GlyphLayout$GVData*,int32_t,int32_t,int32_t,int32_t,$Point2D$Float*,int32_t,int32_t)>(&SunLayoutEngine::shape))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createFace 6
#define _METHOD_INDEX_disposeFace 7
#define _METHOD_INDEX_shape 13

$InnerClassInfo _SunLayoutEngine_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$LayoutEngine", "sun.font.GlyphLayout", "LayoutEngine", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.font.GlyphLayout$LayoutEngineFactory", "sun.font.GlyphLayout", "LayoutEngineFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.font.SunLayoutEngine$FaceRef", "sun.font.SunLayoutEngine", "FaceRef", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunLayoutEngine_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.SunLayoutEngine",
	"java.lang.Object",
	"sun.font.GlyphLayout$LayoutEngine,sun.font.GlyphLayout$LayoutEngineFactory",
	_SunLayoutEngine_FieldInfo_,
	_SunLayoutEngine_MethodInfo_,
	nullptr,
	nullptr,
	_SunLayoutEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.SunLayoutEngine$FaceRef"
};

$Object* allocate$SunLayoutEngine($Class* clazz) {
	return $of($alloc(SunLayoutEngine));
}

int32_t SunLayoutEngine::hashCode() {
	 return this->$GlyphLayout$LayoutEngine::hashCode();
}

bool SunLayoutEngine::equals(Object$* arg0) {
	 return this->$GlyphLayout$LayoutEngine::equals(arg0);
}

$Object* SunLayoutEngine::clone() {
	 return this->$GlyphLayout$LayoutEngine::clone();
}

$String* SunLayoutEngine::toString() {
	 return this->$GlyphLayout$LayoutEngine::toString();
}

void SunLayoutEngine::finalize() {
	this->$GlyphLayout$LayoutEngine::finalize();
}

$GlyphLayout$LayoutEngineFactory* SunLayoutEngine::instance$ = nullptr;
$WeakHashMap* SunLayoutEngine::facePtr = nullptr;

$GlyphLayout$LayoutEngineFactory* SunLayoutEngine::instance() {
	$init(SunLayoutEngine);
	if (SunLayoutEngine::instance$ == nullptr) {
		$assignStatic(SunLayoutEngine::instance$, $new(SunLayoutEngine));
	}
	return SunLayoutEngine::instance$;
}

void SunLayoutEngine::init$() {
	$set(this, cacheref, $new($SoftReference, nullptr));
}

$GlyphLayout$LayoutEngine* SunLayoutEngine::getEngine($Font2D* font, int32_t script, int32_t lang) {
	return getEngine($$new($GlyphLayout$LayoutEngineKey, font, script, lang));
}

$GlyphLayout$LayoutEngine* SunLayoutEngine::getEngine($GlyphLayout$LayoutEngineKey* key) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap, cache, $cast($ConcurrentHashMap, $nc(this->cacheref)->get()));
	if (cache == nullptr) {
		$assign(cache, $new($ConcurrentHashMap));
		$set(this, cacheref, $new($SoftReference, cache));
	}
	$var($GlyphLayout$LayoutEngine, e, $cast($GlyphLayout$LayoutEngine, $nc(cache)->get(key)));
	if (e == nullptr) {
		$var($GlyphLayout$LayoutEngineKey, copy, $nc(key)->copy());
		$assign(e, $new(SunLayoutEngine, copy));
		cache->put(copy, e);
	}
	return e;
}

void SunLayoutEngine::init$($GlyphLayout$LayoutEngineKey* key) {
	$set(this, cacheref, $new($SoftReference, nullptr));
	$set(this, key, key);
}

int64_t SunLayoutEngine::getFacePtr($Font2D* font2D) {
	$useLocalCurrentObjectStackCache();
	$var($SunLayoutEngine$FaceRef, ref, nullptr);
	$synchronized(SunLayoutEngine::facePtr) {
		$assign(ref, $cast($SunLayoutEngine$FaceRef, $nc(SunLayoutEngine::facePtr)->computeIfAbsent(font2D, static_cast<$Function*>($$new(SunLayoutEngine$$Lambda$FaceRef)))));
	}
	return $nc(ref)->getNativePtr();
}

void SunLayoutEngine::layout($FontStrikeDesc* desc, $floats* mat, float ptSize, int32_t gmask, int32_t baseIndex, $TextRecord* tr, int32_t typo_flags, $Point2D$Float* pt, $GlyphLayout$GVData* data) {
	$useLocalCurrentObjectStackCache();
	$var($Font2D, font, $nc(this->key)->font());
	$var($FontStrike, strike, $nc(font)->getStrike(desc));
	int64_t pFace = getFacePtr(font);
	if (pFace != 0) {
		shape(font, strike, ptSize, mat, pFace, $nc(tr)->text, data, $nc(this->key)->script(), tr->start, tr->limit, baseIndex, pt, typo_flags, gmask);
	}
}

bool SunLayoutEngine::shape($Font2D* font, $FontStrike* strike, float ptSize, $floats* mat, int64_t pFace, $chars* chars, $GlyphLayout$GVData* data, int32_t script, int32_t offset, int32_t limit, int32_t baseIndex, $Point2D$Float* pt, int32_t typo_flags, int32_t slot) {
	$init(SunLayoutEngine);
	bool $ret = false;
	$prepareNativeStatic(SunLayoutEngine, shape, bool, $Font2D* font, $FontStrike* strike, float ptSize, $floats* mat, int64_t pFace, $chars* chars, $GlyphLayout$GVData* data, int32_t script, int32_t offset, int32_t limit, int32_t baseIndex, $Point2D$Float* pt, int32_t typo_flags, int32_t slot);
	$ret = $invokeNativeStatic(font, strike, ptSize, mat, pFace, chars, data, script, offset, limit, baseIndex, pt, typo_flags, slot);
	$finishNativeStatic();
	return $ret;
}

int64_t SunLayoutEngine::createFace($Font2D* font, int64_t platformNativeFontPtr) {
	$init(SunLayoutEngine);
	int64_t $ret = 0;
	$prepareNativeStatic(SunLayoutEngine, createFace, int64_t, $Font2D* font, int64_t platformNativeFontPtr);
	$ret = $invokeNativeStatic(font, platformNativeFontPtr);
	$finishNativeStatic();
	return $ret;
}

void SunLayoutEngine::disposeFace(int64_t facePtr) {
	$init(SunLayoutEngine);
	$prepareNativeStatic(SunLayoutEngine, disposeFace, void, int64_t facePtr);
	$invokeNativeStatic(facePtr);
	$finishNativeStatic();
}

void clinit$SunLayoutEngine($Class* class$) {
	{
		$FontManagerNativeLibrary::load();
	}
	$assignStatic(SunLayoutEngine::facePtr, $new($WeakHashMap));
}

SunLayoutEngine::SunLayoutEngine() {
}

$Class* SunLayoutEngine::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SunLayoutEngine$$Lambda$FaceRef::classInfo$.name)) {
			return SunLayoutEngine$$Lambda$FaceRef::load$(name, initialize);
		}
	}
	$loadClass(SunLayoutEngine, name, initialize, &_SunLayoutEngine_ClassInfo_, clinit$SunLayoutEngine, allocate$SunLayoutEngine);
	return class$;
}

$Class* SunLayoutEngine::class$ = nullptr;

	} // font
} // sun