#include <sun/font/FontStrikeDisposer.h>

#include <java/lang/ref/Reference.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer$PollDisposable = ::sun::java2d::Disposer$PollDisposable;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FontStrikeDisposer_FieldInfo_[] = {
	{"strikeCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Lsun/font/FontStrikeDesc;Ljava/lang/ref/Reference<Lsun/font/FontStrike;>;>;", 0, $field(FontStrikeDisposer, strikeCache)},
	{"desc", "Lsun/font/FontStrikeDesc;", nullptr, 0, $field(FontStrikeDisposer, desc)},
	{"longGlyphImages", "[J", nullptr, 0, $field(FontStrikeDisposer, longGlyphImages)},
	{"intGlyphImages", "[I", nullptr, 0, $field(FontStrikeDisposer, intGlyphImages)},
	{"segIntGlyphImages", "[[I", nullptr, 0, $field(FontStrikeDisposer, segIntGlyphImages)},
	{"segLongGlyphImages", "[[J", nullptr, 0, $field(FontStrikeDisposer, segLongGlyphImages)},
	{"pScalerContext", "J", nullptr, 0, $field(FontStrikeDisposer, pScalerContext)},
	{"disposed", "Z", nullptr, 0, $field(FontStrikeDisposer, disposed)},
	{"comp", "Z", nullptr, 0, $field(FontStrikeDisposer, comp)},
	{}
};

$MethodInfo _FontStrikeDisposer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[I)V", nullptr, $PUBLIC, $method(static_cast<void(FontStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$ints*)>(&FontStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[J)V", nullptr, $PUBLIC, $method(static_cast<void(FontStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$longs*)>(&FontStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J)V", nullptr, $PUBLIC, $method(static_cast<void(FontStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t)>(&FontStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;)V", nullptr, $PUBLIC, $method(static_cast<void(FontStrikeDisposer::*)($Font2D*,$FontStrikeDesc*)>(&FontStrikeDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FontStrikeDisposer_InnerClassesInfo_[] = {
	{"sun.java2d.Disposer$PollDisposable", "sun.java2d.Disposer", "PollDisposable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FontStrikeDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontStrikeDisposer",
	"java.lang.Object",
	"sun.java2d.DisposerRecord,sun.java2d.Disposer$PollDisposable",
	_FontStrikeDisposer_FieldInfo_,
	_FontStrikeDisposer_MethodInfo_,
	nullptr,
	nullptr,
	_FontStrikeDisposer_InnerClassesInfo_
};

$Object* allocate$FontStrikeDisposer($Class* clazz) {
	return $of($alloc(FontStrikeDisposer));
}

int32_t FontStrikeDisposer::hashCode() {
	 return this->$DisposerRecord::hashCode();
}

bool FontStrikeDisposer::equals(Object$* arg0) {
	 return this->$DisposerRecord::equals(arg0);
}

$Object* FontStrikeDisposer::clone() {
	 return this->$DisposerRecord::clone();
}

$String* FontStrikeDisposer::toString() {
	 return this->$DisposerRecord::toString();
}

void FontStrikeDisposer::finalize() {
	this->$DisposerRecord::finalize();
}

void FontStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $ints* images) {
	this->pScalerContext = 0;
	this->disposed = false;
	this->comp = false;
	$set(this, strikeCache, $nc(font2D)->strikeCache);
	$set(this, desc, desc);
	this->pScalerContext = pContext;
	$set(this, intGlyphImages, images);
}

void FontStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $longs* images) {
	this->pScalerContext = 0;
	this->disposed = false;
	this->comp = false;
	$set(this, strikeCache, $nc(font2D)->strikeCache);
	$set(this, desc, desc);
	this->pScalerContext = pContext;
	$set(this, longGlyphImages, images);
}

void FontStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext) {
	this->pScalerContext = 0;
	this->disposed = false;
	this->comp = false;
	$set(this, strikeCache, $nc(font2D)->strikeCache);
	$set(this, desc, desc);
	this->pScalerContext = pContext;
}

void FontStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc) {
	this->pScalerContext = 0;
	this->disposed = false;
	this->comp = false;
	$set(this, strikeCache, $nc(font2D)->strikeCache);
	$set(this, desc, desc);
	this->comp = true;
}

void FontStrikeDisposer::dispose() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!this->disposed) {
			$var($Reference, ref, $cast($Reference, $nc(this->strikeCache)->get(this->desc)));
			if (ref != nullptr) {
				$var($Object, o, ref->get());
				if (o == nullptr) {
					$nc(this->strikeCache)->remove(this->desc);
				}
			}
			$StrikeCache::disposeStrike(this);
			this->disposed = true;
		}
	}
}

FontStrikeDisposer::FontStrikeDisposer() {
}

$Class* FontStrikeDisposer::load$($String* name, bool initialize) {
	$loadClass(FontStrikeDisposer, name, initialize, &_FontStrikeDisposer_ClassInfo_, allocate$FontStrikeDisposer);
	return class$;
}

$Class* FontStrikeDisposer::class$ = nullptr;

	} // font
} // sun