#include <sun/java2d/xr/MaskTileManager.h>

#include <java/awt/Color.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <sun/java2d/xr/DirtyRegion.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/MaskTile.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MASK_SIZE
#undef NO_ALPHA

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $DirtyRegion = ::sun::java2d::xr::DirtyRegion;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $MaskTile = ::sun::java2d::xr::MaskTile;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _MaskTileManager_FieldInfo_[] = {
	{"MASK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MaskTileManager, MASK_SIZE)},
	{"mainTile", "Lsun/java2d/xr/MaskTile;", nullptr, 0, $field(MaskTileManager, mainTile)},
	{"tileList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/java2d/xr/MaskTile;>;", 0, $field(MaskTileManager, tileList)},
	{"allocatedTiles", "I", nullptr, 0, $field(MaskTileManager, allocatedTiles)},
	{"xTiles", "I", nullptr, 0, $field(MaskTileManager, xTiles)},
	{"yTiles", "I", nullptr, 0, $field(MaskTileManager, yTiles)},
	{"xrMgr", "Lsun/java2d/xr/XRCompositeManager;", nullptr, 0, $field(MaskTileManager, xrMgr)},
	{"con", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(MaskTileManager, con)},
	{"maskPixmap", "I", nullptr, 0, $field(MaskTileManager, maskPixmap)},
	{"maskPicture", "I", nullptr, 0, $field(MaskTileManager, maskPicture)},
	{"maskGC", "J", nullptr, 0, $field(MaskTileManager, maskGC)},
	{}
};

$MethodInfo _MaskTileManager_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRCompositeManager;I)V", nullptr, $PUBLIC, $method(static_cast<void(MaskTileManager::*)($XRCompositeManager*,int32_t)>(&MaskTileManager::init$))},
	{"allocTiles", "(Lsun/java2d/xr/DirtyRegion;)V", nullptr, $PROTECTED},
	{"clearUploadMask", "(III)V", nullptr, $PUBLIC},
	{"compositeSingleTile", "(Lsun/java2d/xr/XRSurfaceData;Lsun/java2d/xr/MaskTile;Lsun/java2d/xr/DirtyRegion;ZIILsun/java2d/xr/XRColor;)V", nullptr, $PROTECTED},
	{"fillMask", "(Lsun/java2d/xr/XRSurfaceData;)V", nullptr, $PUBLIC},
	{"getMainTile", "()Lsun/java2d/xr/MaskTile;", nullptr, $PUBLIC},
	{"limitRectCoords", "(Lsun/java2d/xr/GrowableRectArray;I)V", nullptr, $PRIVATE, $method(static_cast<void(MaskTileManager::*)($GrowableRectArray*,int32_t)>(&MaskTileManager::limitRectCoords))},
	{"tileRects", "()V", nullptr, $PROTECTED},
	{"uploadMask", "(IIII[B)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MaskTileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.MaskTileManager",
	"java.lang.Object",
	nullptr,
	_MaskTileManager_FieldInfo_,
	_MaskTileManager_MethodInfo_
};

$Object* allocate$MaskTileManager($Class* clazz) {
	return $of($alloc(MaskTileManager));
}

void MaskTileManager::init$($XRCompositeManager* xrMgr, int32_t parentXid) {
	$set(this, mainTile, $new($MaskTile));
	this->allocatedTiles = 0;
	$set(this, tileList, $new($ArrayList));
	$set(this, xrMgr, xrMgr);
	$set(this, con, $nc(xrMgr)->getBackend());
	this->maskPixmap = $nc(this->con)->createPixmap(parentXid, 8, MaskTileManager::MASK_SIZE, MaskTileManager::MASK_SIZE);
	this->maskPicture = $nc(this->con)->createPicture(this->maskPixmap, $XRUtils::PictStandardA8);
	$init($Color);
	$nc(this->con)->renderRectangle(this->maskPicture, $XRUtils::PictOpClear, $$new($XRColor, $Color::black), 0, 0, MaskTileManager::MASK_SIZE, MaskTileManager::MASK_SIZE);
	this->maskGC = $nc(this->con)->createGC(this->maskPixmap);
	$nc(this->con)->setGCExposures(this->maskGC, false);
}

void MaskTileManager::fillMask($XRSurfaceData* dst) {
	$useLocalCurrentObjectStackCache();
	bool maskRequired = $nc(this->xrMgr)->maskRequired();
	bool maskEvaluated = $XRUtils::isMaskEvaluated($nc(this->xrMgr)->compRule);
	if (maskRequired && maskEvaluated) {
		$nc(this->mainTile)->calculateDirtyAreas();
		$var($DirtyRegion, dirtyArea, $nc($($nc(this->mainTile)->getDirtyArea()))->cloneRegion());
		$nc(this->mainTile)->translate(-$nc(dirtyArea)->x, -dirtyArea->y);
		$var($XRColor, maskColor, $nc(this->xrMgr)->getMaskColor());
		bool var$0 = $nc(dirtyArea)->getWidth() <= MaskTileManager::MASK_SIZE;
		if (var$0 && dirtyArea->getHeight() <= MaskTileManager::MASK_SIZE) {
			compositeSingleTile(dst, this->mainTile, dirtyArea, maskRequired, 0, 0, maskColor);
		} else {
			allocTiles(dirtyArea);
			tileRects();
			for (int32_t i = 0; i < this->yTiles; ++i) {
				for (int32_t m = 0; m < this->xTiles; ++m) {
					$var($MaskTile, tile, $cast($MaskTile, $nc(this->tileList)->get(i * this->xTiles + m)));
					int32_t tileStartX = m * MaskTileManager::MASK_SIZE;
					int32_t tileStartY = i * MaskTileManager::MASK_SIZE;
					compositeSingleTile(dst, tile, dirtyArea, maskRequired, tileStartX, tileStartY, maskColor);
				}
			}
		}
	} else if ($nc(this->xrMgr)->isSolidPaintActive()) {
		$nc(this->xrMgr)->XRRenderRectangles(dst, $($nc(this->mainTile)->getRects()));
	} else {
		$nc(this->xrMgr)->XRCompositeRectangles(dst, $($nc(this->mainTile)->getRects()));
	}
	$nc(this->mainTile)->reset();
}

int32_t MaskTileManager::uploadMask(int32_t w, int32_t h, int32_t maskscan, int32_t maskoff, $bytes* mask) {
	int32_t maskPic = $XRUtils::None;
	if (mask != nullptr) {
		float maskAlpha = $nc(this->xrMgr)->isTexturePaintActive() ? $nc(this->xrMgr)->getExtraAlpha() : 1.0f;
		$nc(this->con)->putMaskImage(this->maskPixmap, this->maskGC, mask, 0, 0, 0, 0, w, h, maskoff, maskscan, maskAlpha);
		maskPic = this->maskPicture;
	} else if ($nc(this->xrMgr)->isTexturePaintActive()) {
		maskPic = $nc(this->xrMgr)->getExtraAlphaMask();
	}
	return maskPic;
}

void MaskTileManager::clearUploadMask(int32_t mask, int32_t w, int32_t h) {
	if (mask == this->maskPicture) {
		$init($XRColor);
		$nc(this->con)->renderRectangle(this->maskPicture, $XRUtils::PictOpClear, $XRColor::NO_ALPHA, 0, 0, w, h);
	}
}

void MaskTileManager::compositeSingleTile($XRSurfaceData* dst, $MaskTile* tile, $DirtyRegion* dirtyArea, bool maskRequired, int32_t tileStartX, int32_t tileStartY, $XRColor* maskColor) {
	if ($nc($nc(tile)->rects)->getSize() > 0) {
		$var($DirtyRegion, tileDirtyArea, tile->getDirtyArea());
		int32_t x = $nc(tileDirtyArea)->x + tileStartX + $nc(dirtyArea)->x;
		int32_t y = tileDirtyArea->y + tileStartY + dirtyArea->y;
		int32_t width = tileDirtyArea->x2 - tileDirtyArea->x;
		int32_t height = tileDirtyArea->y2 - tileDirtyArea->y;
		width = $Math::min(width, MaskTileManager::MASK_SIZE);
		height = $Math::min(height, MaskTileManager::MASK_SIZE);
		int32_t rectCnt = $nc(tile->rects)->getSize();
		if (maskRequired) {
			int32_t mask = $XRUtils::None;
			if (rectCnt > 1) {
				$nc(this->con)->renderRectangles(this->maskPicture, $XRUtils::PictOpSrc, maskColor, tile->rects);
				mask = this->maskPicture;
			} else if ($nc(this->xrMgr)->isTexturePaintActive()) {
				mask = $nc(this->xrMgr)->getExtraAlphaMask();
			}
			$nc(this->xrMgr)->XRComposite($XRUtils::None, mask, $nc(dst)->getPicture(), x, y, tileDirtyArea->x, tileDirtyArea->y, x, y, width, height);
			if (rectCnt > 1) {
				$init($XRColor);
				$nc(this->con)->renderRectangle(this->maskPicture, $XRUtils::PictOpClear, $XRColor::NO_ALPHA, tileDirtyArea->x, tileDirtyArea->y, width, height);
			}
			tile->reset();
		} else if (rectCnt > 0) {
			$nc(tile->rects)->translateRects(tileStartX + dirtyArea->x, tileStartY + dirtyArea->y);
			$nc(this->xrMgr)->XRRenderRectangles(dst, tile->rects);
		}
	}
}

void MaskTileManager::allocTiles($DirtyRegion* maskArea) {
	$useLocalCurrentObjectStackCache();
	this->xTiles = ($div($nc(maskArea)->getWidth(), MaskTileManager::MASK_SIZE)) + 1;
	this->yTiles = ($div(maskArea->getHeight(), MaskTileManager::MASK_SIZE)) + 1;
	int32_t tileCnt = this->xTiles * this->yTiles;
	if (tileCnt > this->allocatedTiles) {
		for (int32_t i = 0; i < tileCnt; ++i) {
			if (i < this->allocatedTiles) {
				$nc(($cast($MaskTile, $($nc(this->tileList)->get(i)))))->reset();
			} else {
				$nc(this->tileList)->add($$new($MaskTile));
			}
		}
		this->allocatedTiles = tileCnt;
	}
}

void MaskTileManager::tileRects() {
	$useLocalCurrentObjectStackCache();
	$var($GrowableRectArray, rects, $nc(this->mainTile)->rects);
	for (int32_t i = 0; i < $nc(rects)->getSize(); ++i) {
		int32_t tileXStartIndex = $div(rects->getX(i), MaskTileManager::MASK_SIZE);
		int32_t tileYStartIndex = $div(rects->getY(i), MaskTileManager::MASK_SIZE);
		int32_t var$0 = rects->getX(i);
		int32_t tileXLength = ($div((var$0 + rects->getWidth(i)), MaskTileManager::MASK_SIZE) + 1) - tileXStartIndex;
		int32_t var$1 = rects->getY(i);
		int32_t tileYLength = ($div((var$1 + rects->getHeight(i)), MaskTileManager::MASK_SIZE) + 1) - tileYStartIndex;
		for (int32_t n = 0; n < tileYLength; ++n) {
			for (int32_t m = 0; m < tileXLength; ++m) {
				int32_t tileIndex = this->xTiles * (tileYStartIndex + n) + tileXStartIndex + m;
				$var($MaskTile, tile, $cast($MaskTile, $nc(this->tileList)->get(tileIndex)));
				$var($GrowableRectArray, rectTileList, $nc(tile)->getRects());
				int32_t tileArrayIndex = $nc(rectTileList)->getNextIndex();
				int32_t tileStartPosX = (tileXStartIndex + m) * MaskTileManager::MASK_SIZE;
				int32_t tileStartPosY = (tileYStartIndex + n) * MaskTileManager::MASK_SIZE;
				rectTileList->setX(tileArrayIndex, rects->getX(i) - tileStartPosX);
				rectTileList->setY(tileArrayIndex, rects->getY(i) - tileStartPosY);
				rectTileList->setWidth(tileArrayIndex, rects->getWidth(i));
				rectTileList->setHeight(tileArrayIndex, rects->getHeight(i));
				limitRectCoords(rectTileList, tileArrayIndex);
				int32_t var$2 = rectTileList->getX(tileArrayIndex);
				int32_t var$3 = rectTileList->getY(tileArrayIndex);
				int32_t var$5 = rectTileList->getWidth(tileArrayIndex);
				int32_t var$4 = var$5 + rectTileList->getX(tileArrayIndex);
				int32_t var$6 = rectTileList->getHeight(tileArrayIndex);
				$nc($(tile->getDirtyArea()))->growDirtyRegion(var$2, var$3, var$4, var$6 + rectTileList->getY(tileArrayIndex));
			}
		}
	}
}

void MaskTileManager::limitRectCoords($GrowableRectArray* rects, int32_t index) {
	int32_t var$0 = $nc(rects)->getX(index);
	if ((var$0 + rects->getWidth(index)) > MaskTileManager::MASK_SIZE) {
		rects->setWidth(index, MaskTileManager::MASK_SIZE - rects->getX(index));
	}
	int32_t var$1 = $nc(rects)->getY(index);
	if ((var$1 + rects->getHeight(index)) > MaskTileManager::MASK_SIZE) {
		rects->setHeight(index, MaskTileManager::MASK_SIZE - rects->getY(index));
	}
	if ($nc(rects)->getX(index) < 0) {
		int32_t var$2 = rects->getWidth(index);
		rects->setWidth(index, var$2 + rects->getX(index));
		rects->setX(index, 0);
	}
	if ($nc(rects)->getY(index) < 0) {
		int32_t var$3 = rects->getHeight(index);
		rects->setHeight(index, var$3 + rects->getY(index));
		rects->setY(index, 0);
	}
}

$MaskTile* MaskTileManager::getMainTile() {
	return this->mainTile;
}

MaskTileManager::MaskTileManager() {
}

$Class* MaskTileManager::load$($String* name, bool initialize) {
	$loadClass(MaskTileManager, name, initialize, &_MaskTileManager_ClassInfo_, allocate$MaskTileManager);
	return class$;
}

$Class* MaskTileManager::class$ = nullptr;

		} // xr
	} // java2d
} // sun