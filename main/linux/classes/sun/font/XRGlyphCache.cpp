#include <sun/font/XRGlyphCache.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/GlyphDisposedListener.h>
#include <sun/font/GlyphList.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/XRGlyphCache$1.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <sun/java2d/xr/GrowableIntArray.h>
#include <sun/java2d/xr/MutableInteger.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MAX_CACHED_PIXELS

using $ListArray = $Array<::java::util::List>;
using $XRGlyphCacheEntryArray = $Array<::sun::font::XRGlyphCacheEntry>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GlyphDisposedListener = ::sun::font::GlyphDisposedListener;
using $GlyphList = ::sun::font::GlyphList;
using $StrikeCache = ::sun::font::StrikeCache;
using $XRGlyphCache$1 = ::sun::font::XRGlyphCache$1;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;
using $MutableInteger = ::sun::java2d::xr::MutableInteger;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace font {

$FieldInfo _XRGlyphCache_FieldInfo_[] = {
	{"con", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRGlyphCache, con)},
	{"maskBuffer", "Lsun/java2d/xr/XRCompositeManager;", nullptr, 0, $field(XRGlyphCache, maskBuffer)},
	{"cacheMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lsun/java2d/xr/MutableInteger;Lsun/font/XRGlyphCacheEntry;>;", 0, $field(XRGlyphCache, cacheMap)},
	{"nextID", "I", nullptr, 0, $field(XRGlyphCache, nextID)},
	{"tmp", "Lsun/java2d/xr/MutableInteger;", nullptr, 0, $field(XRGlyphCache, tmp)},
	{"grayGlyphSet", "I", nullptr, 0, $field(XRGlyphCache, grayGlyphSet)},
	{"lcdGlyphSet", "I", nullptr, 0, $field(XRGlyphCache, lcdGlyphSet)},
	{"time", "I", nullptr, 0, $field(XRGlyphCache, time)},
	{"cachedPixels", "I", nullptr, 0, $field(XRGlyphCache, cachedPixels)},
	{"MAX_CACHED_PIXELS", "I", nullptr, $STATIC | $FINAL, $constField(XRGlyphCache, MAX_CACHED_PIXELS)},
	{"freeGlyphIDs", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", 0, $field(XRGlyphCache, freeGlyphIDs)},
	{"batchGlyphUpload", "Z", nullptr, $STATIC | $FINAL, $constField(XRGlyphCache, batchGlyphUpload)},
	{}
};

$MethodInfo _XRGlyphCache_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRCompositeManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XRGlyphCache::*)($XRCompositeManager*)>(&XRGlyphCache::init$))},
	{"cacheGlyphs", "(Lsun/font/GlyphList;)[Lsun/font/XRGlyphCacheEntry;", nullptr, $PUBLIC},
	{"clearCache", "([Lsun/font/XRGlyphCacheEntry;)V", nullptr, $PROTECTED},
	{"containsLCDGlyphs", "(Ljava/util/List;)Z", "(Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;)Z", $PROTECTED},
	{"freeGlyphs", "(Lsun/java2d/xr/GrowableIntArray;)V", nullptr, $PRIVATE, $method(static_cast<void(XRGlyphCache::*)($GrowableIntArray*)>(&XRGlyphCache::freeGlyphs))},
	{"generateGlyphImageStream", "(Ljava/util/List;)[B", "(Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;)[B", $PROTECTED},
	{"getEntryForPointer", "(J)Lsun/font/XRGlyphCacheEntry;", nullptr, $PROTECTED},
	{"getFreeGlyphID", "()I", nullptr, $PROTECTED},
	{"glyphDisposed", "(Ljava/util/ArrayList;)V", "(Ljava/util/ArrayList<Ljava/lang/Long;>;)V", $PUBLIC},
	{"seperateGlyphTypes", "(Ljava/util/List;Z)[Ljava/util/List;", "(Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;Z)[Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;", $PROTECTED},
	{"uploadGlyphs", "([Lsun/font/XRGlyphCacheEntry;Ljava/util/ArrayList;Lsun/font/GlyphList;[I)V", "([Lsun/font/XRGlyphCacheEntry;Ljava/util/ArrayList<Lsun/font/XRGlyphCacheEntry;>;Lsun/font/GlyphList;[I)V", $PROTECTED},
	{}
};

$InnerClassInfo _XRGlyphCache_InnerClassesInfo_[] = {
	{"sun.font.XRGlyphCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XRGlyphCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.XRGlyphCache",
	"java.lang.Object",
	"sun.font.GlyphDisposedListener",
	_XRGlyphCache_FieldInfo_,
	_XRGlyphCache_MethodInfo_,
	nullptr,
	nullptr,
	_XRGlyphCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.XRGlyphCache$1"
};

$Object* allocate$XRGlyphCache($Class* clazz) {
	return $of($alloc(XRGlyphCache));
}

void XRGlyphCache::init$($XRCompositeManager* maskBuf) {
	$set(this, cacheMap, $new($HashMap, 256));
	this->nextID = 1;
	$set(this, tmp, $new($MutableInteger, 0));
	this->time = 0;
	this->cachedPixels = 0;
	$set(this, freeGlyphIDs, $new($ArrayList, 255));
	$set(this, con, $nc(maskBuf)->getBackend());
	$set(this, maskBuffer, maskBuf);
	this->grayGlyphSet = $nc(this->con)->XRenderCreateGlyphSet($XRUtils::PictStandardA8);
	this->lcdGlyphSet = $nc(this->con)->XRenderCreateGlyphSet($XRUtils::PictStandardARGB32);
	$StrikeCache::addGlyphDisposedListener(this);
}

void XRGlyphCache::glyphDisposed($ArrayList* glyphPtrList) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($GrowableIntArray, glyphIDList, $new($GrowableIntArray, 1, $nc(glyphPtrList)->size()));
			{
				$var($Iterator, i$, $nc(glyphPtrList)->iterator());
				for (; $nc(i$)->hasNext();) {
					int64_t glyphPtr = $nc(($cast($Long, $(i$->next()))))->longValue();
					{
						int32_t glyphID = $XRGlyphCacheEntry::getGlyphID(glyphPtr);
						if (glyphID != 0) {
							glyphIDList->addInt(glyphID);
						}
					}
				}
			}
			freeGlyphs(glyphIDList);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t XRGlyphCache::getFreeGlyphID() {
	if ($nc(this->freeGlyphIDs)->size() > 0) {
		int32_t newID = $nc(($cast($Integer, $($nc(this->freeGlyphIDs)->remove($nc(this->freeGlyphIDs)->size() - 1)))))->intValue();
		return newID;
	}
	return this->nextID++;
}

$XRGlyphCacheEntry* XRGlyphCache::getEntryForPointer(int64_t imgPtr) {
	int32_t id = $XRGlyphCacheEntry::getGlyphID(imgPtr);
	if (id == 0) {
		return nullptr;
	}
	$nc(this->tmp)->setValue(id);
	return $cast($XRGlyphCacheEntry, $nc(this->cacheMap)->get(this->tmp));
}

$XRGlyphCacheEntryArray* XRGlyphCache::cacheGlyphs($GlyphList* glyphList) {
	$useLocalCurrentObjectStackCache();
	++this->time;
	$var($XRGlyphCacheEntryArray, entries, $new($XRGlyphCacheEntryArray, $nc(glyphList)->getNumGlyphs()));
	$var($longs, imgPtrs, glyphList->getImages());
	$var($ArrayList, uncachedGlyphs, nullptr);
	for (int32_t i = 0; i < glyphList->getNumGlyphs(); ++i) {
		$var($XRGlyphCacheEntry, glyph, nullptr);
		if ($nc(imgPtrs)->get(i) == (int64_t)0) {
			continue;
		}
		if (($assign(glyph, getEntryForPointer($nc(imgPtrs)->get(i)))) == nullptr) {
			$assign(glyph, $new($XRGlyphCacheEntry, $nc(imgPtrs)->get(i), glyphList));
			glyph->setGlyphID(getFreeGlyphID());
			$nc(this->cacheMap)->put($$new($MutableInteger, glyph->getGlyphID()), glyph);
			if (uncachedGlyphs == nullptr) {
				$assign(uncachedGlyphs, $new($ArrayList));
			}
			$nc(uncachedGlyphs)->add(glyph);
		}
		$nc(glyph)->setLastUsed(this->time);
		entries->set(i, glyph);
	}
	if (uncachedGlyphs != nullptr) {
		uploadGlyphs(entries, uncachedGlyphs, glyphList, nullptr);
	}
	return entries;
}

void XRGlyphCache::uploadGlyphs($XRGlyphCacheEntryArray* glyphs, $ArrayList* uncachedGlyphs, $GlyphList* gl, $ints* glIndices) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(uncachedGlyphs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XRGlyphCacheEntry, glyph, $cast($XRGlyphCacheEntry, i$->next()));
			{
				this->cachedPixels += $nc(glyph)->getPixelCnt();
			}
		}
	}
	if (this->cachedPixels > XRGlyphCache::MAX_CACHED_PIXELS) {
		clearCache(glyphs);
	}
	bool containsLCDGlyphs = this->containsLCDGlyphs(uncachedGlyphs);
	$var($ListArray, seperatedGlyphList, seperateGlyphTypes(uncachedGlyphs, containsLCDGlyphs));
	$var($List, grayGlyphList, $nc(seperatedGlyphList)->get(0));
	$var($List, lcdGlyphList, seperatedGlyphList->get(1));
	{
		if (grayGlyphList != nullptr && grayGlyphList->size() > 0) {
			$nc(this->con)->XRenderAddGlyphs(this->grayGlyphSet, gl, grayGlyphList, $(generateGlyphImageStream(grayGlyphList)));
		}
		if (lcdGlyphList != nullptr && lcdGlyphList->size() > 0) {
			$nc(this->con)->XRenderAddGlyphs(this->lcdGlyphSet, gl, lcdGlyphList, $(generateGlyphImageStream(lcdGlyphList)));
		}
	}
}

$ListArray* XRGlyphCache::seperateGlyphTypes($List* glyphList, bool containsLCDGlyphs) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, lcdGlyphs, nullptr);
	$var($ArrayList, grayGlyphs, nullptr);
	{
		$var($Iterator, i$, $nc(glyphList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XRGlyphCacheEntry, cacheEntry, $cast($XRGlyphCacheEntry, i$->next()));
			{
				if ($nc(cacheEntry)->isGrayscale(containsLCDGlyphs)) {
					if (grayGlyphs == nullptr) {
						$assign(grayGlyphs, $new($ArrayList, glyphList->size()));
					}
					cacheEntry->setGlyphSet(this->grayGlyphSet);
					$nc(grayGlyphs)->add(cacheEntry);
				} else {
					if (lcdGlyphs == nullptr) {
						$assign(lcdGlyphs, $new($ArrayList, glyphList->size()));
					}
					cacheEntry->setGlyphSet(this->lcdGlyphSet);
					$nc(lcdGlyphs)->add(cacheEntry);
				}
			}
		}
	}
	$var($ListArray, tmp, ($new($ListArray, {
		static_cast<$List*>(grayGlyphs),
		static_cast<$List*>(lcdGlyphs)
	})));
	return tmp;
}

$bytes* XRGlyphCache::generateGlyphImageStream($List* glyphList) {
	$useLocalCurrentObjectStackCache();
	bool isLCDGlyph = $nc(($cast($XRGlyphCacheEntry, $($nc(glyphList)->get(0)))))->getGlyphSet() == this->lcdGlyphSet;
	$var($ByteArrayOutputStream, stream, $new($ByteArrayOutputStream, (isLCDGlyph ? 4 : 1) * 48 * glyphList->size()));
	{
		$var($Iterator, i$, glyphList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XRGlyphCacheEntry, cacheEntry, $cast($XRGlyphCacheEntry, i$->next()));
			{
				$nc(cacheEntry)->writePixelData(stream, isLCDGlyph);
			}
		}
	}
	return stream->toByteArray();
}

bool XRGlyphCache::containsLCDGlyphs($List* entries) {
	$useLocalCurrentObjectStackCache();
	bool containsLCDGlyphs = false;
	{
		$var($Iterator, i$, $nc(entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XRGlyphCacheEntry, entry, $cast($XRGlyphCacheEntry, i$->next()));
			{
				int32_t var$0 = $nc(entry)->getSourceRowBytes();
				containsLCDGlyphs = !(var$0 == entry->getWidth());
				if (containsLCDGlyphs) {
					return true;
				}
			}
		}
	}
	return false;
}

void XRGlyphCache::clearCache($XRGlyphCacheEntryArray* glyps) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, cacheList, $new($ArrayList, $($nc(this->cacheMap)->values())));
	$Collections::sort(cacheList, $$new($XRGlyphCache$1, this));
	{
		$var($XRGlyphCacheEntryArray, arr$, glyps);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($XRGlyphCacheEntry, glyph, arr$->get(i$));
			{
				$nc(glyph)->setPinned();
			}
		}
	}
	$var($GrowableIntArray, deleteGlyphList, $new($GrowableIntArray, 1, 10));
	int32_t pixelsToRelease = this->cachedPixels - XRGlyphCache::MAX_CACHED_PIXELS;
	for (int32_t i = cacheList->size() - 1; i >= 0 && pixelsToRelease > 0; --i) {
		$var($XRGlyphCacheEntry, entry, $cast($XRGlyphCacheEntry, cacheList->get(i)));
		if (!$nc(entry)->isPinned()) {
			pixelsToRelease -= entry->getPixelCnt();
			deleteGlyphList->addInt(entry->getGlyphID());
		}
	}
	{
		$var($XRGlyphCacheEntryArray, arr$, glyps);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($XRGlyphCacheEntry, glyph, arr$->get(i$));
			{
				$nc(glyph)->setUnpinned();
			}
		}
	}
	freeGlyphs(deleteGlyphList);
}

void XRGlyphCache::freeGlyphs($GrowableIntArray* glyphIdList) {
	$useLocalCurrentObjectStackCache();
	$var($GrowableIntArray, removedLCDGlyphs, $new($GrowableIntArray, 1, 10));
	$var($GrowableIntArray, removedGrayscaleGlyphs, $new($GrowableIntArray, 1, 10));
	for (int32_t i = 0; i < $nc(glyphIdList)->getSize(); ++i) {
		int32_t glyphId = glyphIdList->getInt(i);
		$nc(this->freeGlyphIDs)->add($($Integer::valueOf(glyphId)));
		$nc(this->tmp)->setValue(glyphId);
		$var($XRGlyphCacheEntry, entry, $cast($XRGlyphCacheEntry, $nc(this->cacheMap)->get(this->tmp)));
		this->cachedPixels -= $nc(entry)->getPixelCnt();
		$nc(this->cacheMap)->remove(this->tmp);
		if (entry->getGlyphSet() == this->grayGlyphSet) {
			removedGrayscaleGlyphs->addInt(glyphId);
		} else {
			removedLCDGlyphs->addInt(glyphId);
		}
		entry->setGlyphID(0);
	}
	if (removedGrayscaleGlyphs->getSize() > 0) {
		$nc(this->con)->XRenderFreeGlyphs(this->grayGlyphSet, $(removedGrayscaleGlyphs->getSizedArray()));
	}
	if (removedLCDGlyphs->getSize() > 0) {
		$nc(this->con)->XRenderFreeGlyphs(this->lcdGlyphSet, $(removedLCDGlyphs->getSizedArray()));
	}
}

XRGlyphCache::XRGlyphCache() {
}

$Class* XRGlyphCache::load$($String* name, bool initialize) {
	$loadClass(XRGlyphCache, name, initialize, &_XRGlyphCache_ClassInfo_, allocate$XRGlyphCache);
	return class$;
}

$Class* XRGlyphCache::class$ = nullptr;

	} // font
} // sun