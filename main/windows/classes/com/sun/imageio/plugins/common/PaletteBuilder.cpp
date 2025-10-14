#include <com/sun/imageio/plugins/common/PaletteBuilder.h>

#include <com/sun/imageio/plugins/common/PaletteBuilder$ColorNode.h>
#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef MAXLEVEL
#undef OPAQUE
#undef TYPE_BYTE_INDEXED

using $PaletteBuilder$ColorNodeArray = $Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>;
using $PaletteBuilder$ColorNode = ::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode;
using $Color = ::java::awt::Color;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _PaletteBuilder_FieldInfo_[] = {
	{"MAXLEVEL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PaletteBuilder, MAXLEVEL)},
	{"src", "Ljava/awt/image/RenderedImage;", nullptr, $PROTECTED, $field(PaletteBuilder, src)},
	{"srcColorModel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(PaletteBuilder, srcColorModel)},
	{"srcRaster", "Ljava/awt/image/Raster;", nullptr, $PROTECTED, $field(PaletteBuilder, srcRaster)},
	{"requiredSize", "I", nullptr, $PROTECTED, $field(PaletteBuilder, requiredSize)},
	{"root", "Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED, $field(PaletteBuilder, root)},
	{"numNodes", "I", nullptr, $PROTECTED, $field(PaletteBuilder, numNodes)},
	{"maxNodes", "I", nullptr, $PROTECTED, $field(PaletteBuilder, maxNodes)},
	{"currLevel", "I", nullptr, $PROTECTED, $field(PaletteBuilder, currLevel)},
	{"currSize", "I", nullptr, $PROTECTED, $field(PaletteBuilder, currSize)},
	{"reduceList", "[Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED, $field(PaletteBuilder, reduceList)},
	{"palette", "[Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED, $field(PaletteBuilder, palette)},
	{"transparency", "I", nullptr, $PROTECTED, $field(PaletteBuilder, transparency)},
	{"transColor", "Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED, $field(PaletteBuilder, transColor)},
	{}
};

$MethodInfo _PaletteBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/RenderedImage;)V", nullptr, $PROTECTED, $method(static_cast<void(PaletteBuilder::*)($RenderedImage*)>(&PaletteBuilder::init$))},
	{"<init>", "(Ljava/awt/image/RenderedImage;I)V", nullptr, $PROTECTED, $method(static_cast<void(PaletteBuilder::*)($RenderedImage*,int32_t)>(&PaletteBuilder::init$))},
	{"buildPalette", "()V", nullptr, $PROTECTED},
	{"canCreatePalette", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ImageTypeSpecifier*)>(&PaletteBuilder::canCreatePalette))},
	{"canCreatePalette", "(Ljava/awt/image/RenderedImage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($RenderedImage*)>(&PaletteBuilder::canCreatePalette))},
	{"createIndexColorModel", "(Ljava/awt/image/RenderedImage;)Ljava/awt/image/IndexColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IndexColorModel*(*)($RenderedImage*)>(&PaletteBuilder::createIndexColorModel))},
	{"createIndexedImage", "(Ljava/awt/image/RenderedImage;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RenderedImage*(*)($RenderedImage*)>(&PaletteBuilder::createIndexedImage))},
	{"findColorIndex", "(Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;Ljava/awt/Color;)I", nullptr, $PROTECTED},
	{"findPaletteEntry", "(Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;I[B[B[B)I", nullptr, $PROTECTED},
	{"freeTree", "(Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;)Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED},
	{"getBranchIndex", "(Ljava/awt/Color;I)I", nullptr, $PROTECTED},
	{"getIndexColorModel", "()Ljava/awt/image/IndexColorModel;", nullptr, $PROTECTED},
	{"getIndexedImage", "()Ljava/awt/image/RenderedImage;", nullptr, $PROTECTED},
	{"getSrcColor", "(II)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(PaletteBuilder::*)(int32_t,int32_t)>(&PaletteBuilder::getSrcColor))},
	{"insertNode", "(Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;Ljava/awt/Color;I)Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, $PROTECTED},
	{"reduceTree", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _PaletteBuilder_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode", "com.sun.imageio.plugins.common.PaletteBuilder", "ColorNode", $PROTECTED},
	{}
};

$ClassInfo _PaletteBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.PaletteBuilder",
	"java.lang.Object",
	nullptr,
	_PaletteBuilder_FieldInfo_,
	_PaletteBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_PaletteBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode"
};

$Object* allocate$PaletteBuilder($Class* clazz) {
	return $of($alloc(PaletteBuilder));
}

$RenderedImage* PaletteBuilder::createIndexedImage($RenderedImage* src) {
	$var(PaletteBuilder, pb, $new(PaletteBuilder, src));
	pb->buildPalette();
	return pb->getIndexedImage();
}

$IndexColorModel* PaletteBuilder::createIndexColorModel($RenderedImage* img) {
	$var(PaletteBuilder, pb, $new(PaletteBuilder, img));
	pb->buildPalette();
	return pb->getIndexColorModel();
}

bool PaletteBuilder::canCreatePalette($ImageTypeSpecifier* type) {
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type == null"_s);
	}
	return true;
}

bool PaletteBuilder::canCreatePalette($RenderedImage* image) {
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null"_s);
	}
	$var($ImageTypeSpecifier, type, $new($ImageTypeSpecifier, image));
	return canCreatePalette(type);
}

$RenderedImage* PaletteBuilder::getIndexedImage() {
	$var($IndexColorModel, icm, getIndexColorModel());
	int32_t var$0 = $nc(this->src)->getWidth();
	$var($BufferedImage, dst, $new($BufferedImage, var$0, $nc(this->src)->getHeight(), $BufferedImage::TYPE_BYTE_INDEXED, icm));
	$var($WritableRaster, wr, dst->getRaster());
	for (int32_t y = 0; y < dst->getHeight(); ++y) {
		for (int32_t x = 0; x < dst->getWidth(); ++x) {
			$var($Color, aColor, getSrcColor(x, y));
			$nc(wr)->setSample(x, y, 0, findColorIndex(this->root, aColor));
		}
	}
	return dst;
}

void PaletteBuilder::init$($RenderedImage* src) {
	PaletteBuilder::init$(src, 256);
}

void PaletteBuilder::init$($RenderedImage* src, int32_t size) {
	$set(this, src, src);
	$set(this, srcColorModel, $nc(src)->getColorModel());
	$set(this, srcRaster, src->getData());
	this->transparency = $nc(this->srcColorModel)->getTransparency();
	this->requiredSize = size;
}

$Color* PaletteBuilder::getSrcColor(int32_t x, int32_t y) {
	int32_t argb = $nc(this->srcColorModel)->getRGB($($nc(this->srcRaster)->getDataElements(x, y, nullptr)));
	return $new($Color, argb, this->transparency != $Transparency::OPAQUE);
}

int32_t PaletteBuilder::findColorIndex($PaletteBuilder$ColorNode* aNode, $Color* aColor) {
	if (this->transparency != $Transparency::OPAQUE && $nc(aColor)->getAlpha() != 255) {
		return 0;
	}
	if ($nc(aNode)->isLeaf) {
		return aNode->paletteIndex;
	} else {
		int32_t childIndex = getBranchIndex(aColor, aNode->level);
		return findColorIndex($nc(aNode->children)->get(childIndex), aColor);
	}
}

void PaletteBuilder::buildPalette() {
	$set(this, reduceList, $new($PaletteBuilder$ColorNodeArray, PaletteBuilder::MAXLEVEL + 1));
	for (int32_t i = 0; i < $nc(this->reduceList)->length; ++i) {
		$nc(this->reduceList)->set(i, nullptr);
	}
	this->numNodes = 0;
	this->maxNodes = 0;
	$set(this, root, nullptr);
	this->currSize = 0;
	this->currLevel = PaletteBuilder::MAXLEVEL;
	int32_t w = $nc(this->src)->getWidth();
	int32_t h = $nc(this->src)->getHeight();
	for (int32_t y = 0; y < h; ++y) {
		for (int32_t x = 0; x < w; ++x) {
			$var($Color, aColor, getSrcColor(w - x - 1, h - y - 1));
			if (this->transparency != $Transparency::OPAQUE && $nc(aColor)->getAlpha() != 255) {
				if (this->transColor == nullptr) {
					--this->requiredSize;
					$set(this, transColor, $new($PaletteBuilder$ColorNode, this));
					$nc(this->transColor)->isLeaf = true;
				}
				$set(this, transColor, insertNode(this->transColor, aColor, 0));
			} else {
				$set(this, root, insertNode(this->root, aColor, 0));
			}
			if (this->currSize > this->requiredSize) {
				reduceTree();
			}
		}
	}
}

$PaletteBuilder$ColorNode* PaletteBuilder::insertNode($PaletteBuilder$ColorNode* aNode$renamed, $Color* aColor, int32_t aLevel) {
	$var($PaletteBuilder$ColorNode, aNode, aNode$renamed);
	if (aNode == nullptr) {
		$assign(aNode, $new($PaletteBuilder$ColorNode, this));
		++this->numNodes;
		if (this->numNodes > this->maxNodes) {
			this->maxNodes = this->numNodes;
		}
		aNode->level = aLevel;
		aNode->isLeaf = (aLevel > PaletteBuilder::MAXLEVEL);
		if (aNode->isLeaf) {
			++this->currSize;
		}
	}
	++$nc(aNode)->colorCount;
	aNode->red += $nc(aColor)->getRed();
	aNode->green += aColor->getGreen();
	aNode->blue += aColor->getBlue();
	if (!aNode->isLeaf) {
		int32_t branchIndex = getBranchIndex(aColor, aLevel);
		if ($nc(aNode->children)->get(branchIndex) == nullptr) {
			++aNode->childCount;
			if (aNode->childCount == 2) {
				$set(aNode, nextReducible, $nc(this->reduceList)->get(aLevel));
				$nc(this->reduceList)->set(aLevel, aNode);
			}
		}
		$nc(aNode->children)->set(branchIndex, $(insertNode($nc(aNode->children)->get(branchIndex), aColor, aLevel + 1)));
	}
	return aNode;
}

$IndexColorModel* PaletteBuilder::getIndexColorModel() {
	int32_t size = this->currSize;
	if (this->transColor != nullptr) {
		++size;
	}
	$var($bytes, red, $new($bytes, size));
	$var($bytes, green, $new($bytes, size));
	$var($bytes, blue, $new($bytes, size));
	int32_t index = 0;
	$set(this, palette, $new($PaletteBuilder$ColorNodeArray, size));
	if (this->transColor != nullptr) {
		++index;
	}
	if (this->root != nullptr) {
		findPaletteEntry(this->root, index, red, green, blue);
	}
	$var($IndexColorModel, icm, nullptr);
	if (this->transColor != nullptr) {
		$assign(icm, $new($IndexColorModel, 8, size, red, green, blue, 0));
	} else {
		$assign(icm, $new($IndexColorModel, 8, this->currSize, red, green, blue));
	}
	return icm;
}

int32_t PaletteBuilder::findPaletteEntry($PaletteBuilder$ColorNode* aNode, int32_t index, $bytes* red, $bytes* green, $bytes* blue) {
	if ($nc(aNode)->isLeaf) {
		$nc(red)->set(index, (int8_t)($div(aNode->red, aNode->colorCount)));
		$nc(green)->set(index, (int8_t)($div(aNode->green, aNode->colorCount)));
		$nc(blue)->set(index, (int8_t)($div(aNode->blue, aNode->colorCount)));
		aNode->paletteIndex = index;
		$nc(this->palette)->set(index, aNode);
		++index;
	} else {
		for (int32_t i = 0; i < 8; ++i) {
			if ($nc(aNode->children)->get(i) != nullptr) {
				index = findPaletteEntry($nc(aNode->children)->get(i), index, red, green, blue);
			}
		}
	}
	return index;
}

int32_t PaletteBuilder::getBranchIndex($Color* aColor, int32_t aLevel) {
	if (aLevel > PaletteBuilder::MAXLEVEL || aLevel < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid octree node depth: "_s, $$str(aLevel)}));
	}
	int32_t shift = PaletteBuilder::MAXLEVEL - aLevel;
	int32_t red_index = (int32_t)(1 & (uint32_t)($sr((int32_t)(255 & (uint32_t)$nc(aColor)->getRed()), shift)));
	int32_t green_index = (int32_t)(1 & (uint32_t)($sr((int32_t)(255 & (uint32_t)aColor->getGreen()), shift)));
	int32_t blue_index = (int32_t)(1 & (uint32_t)($sr((int32_t)(255 & (uint32_t)aColor->getBlue()), shift)));
	int32_t index = ((red_index << 2) | (green_index << 1)) | blue_index;
	return index;
}

void PaletteBuilder::reduceTree() {
	int32_t level = $nc(this->reduceList)->length - 1;
	while ($nc(this->reduceList)->get(level) == nullptr && level >= 0) {
		--level;
	}
	$var($PaletteBuilder$ColorNode, thisNode, $nc(this->reduceList)->get(level));
	if (thisNode == nullptr) {
		return;
	}
	$var($PaletteBuilder$ColorNode, pList, thisNode);
	int32_t minColorCount = $nc(pList)->colorCount;
	int32_t cnt = 1;
	while (pList->nextReducible != nullptr) {
		if (minColorCount > $nc(pList->nextReducible)->colorCount) {
			$assign(thisNode, pList);
			minColorCount = pList->colorCount;
		}
		$assign(pList, pList->nextReducible);
		++cnt;
	}
	if (thisNode == $nc(this->reduceList)->get(level)) {
		$nc(this->reduceList)->set(level, $nc(thisNode)->nextReducible);
	} else {
		$assign(pList, $nc(thisNode)->nextReducible);
		$set(thisNode, nextReducible, $nc(pList)->nextReducible);
		$assign(thisNode, pList);
	}
	if ($nc(thisNode)->isLeaf) {
		return;
	}
	int32_t leafChildCount = $nc(thisNode)->getLeafChildCount();
	thisNode->isLeaf = true;
	this->currSize -= (leafChildCount - 1);
	int32_t aDepth = thisNode->level;
	for (int32_t i = 0; i < 8; ++i) {
		$nc(thisNode->children)->set(i, $(freeTree($nc(thisNode->children)->get(i))));
	}
	thisNode->childCount = 0;
}

$PaletteBuilder$ColorNode* PaletteBuilder::freeTree($PaletteBuilder$ColorNode* aNode) {
	if (aNode == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < 8; ++i) {
		$nc($nc(aNode)->children)->set(i, $(freeTree($nc(aNode->children)->get(i))));
	}
	--this->numNodes;
	return nullptr;
}

PaletteBuilder::PaletteBuilder() {
}

$Class* PaletteBuilder::load$($String* name, bool initialize) {
	$loadClass(PaletteBuilder, name, initialize, &_PaletteBuilder_ClassInfo_, allocate$PaletteBuilder);
	return class$;
}

$Class* PaletteBuilder::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com