#include <sun/awt/shell/Win32ShellFolder2$MultiResolutionIconImage.h>

#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$MultiResolutionIconImage_FieldInfo_[] = {
	{"baseSize", "I", nullptr, $FINAL, $field(Win32ShellFolder2$MultiResolutionIconImage, baseSize)},
	{"resolutionVariants", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;", $FINAL, $field(Win32ShellFolder2$MultiResolutionIconImage, resolutionVariants)},
	{}
};

$MethodInfo _Win32ShellFolder2$MultiResolutionIconImage_MethodInfo_[] = {
	{"<init>", "(ILjava/util/Map;)V", "(ILjava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;)V", $PUBLIC, $method(static_cast<void(Win32ShellFolder2$MultiResolutionIconImage::*)(int32_t,$Map*)>(&Win32ShellFolder2$MultiResolutionIconImage::init$))},
	{"<init>", "(ILjava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolder2$MultiResolutionIconImage::*)(int32_t,$Image*)>(&Win32ShellFolder2$MultiResolutionIconImage::init$))},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Win32ShellFolder2$MultiResolutionIconImage_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$MultiResolutionIconImage", "sun.awt.shell.Win32ShellFolder2", "MultiResolutionIconImage", $STATIC},
	{}
};

$ClassInfo _Win32ShellFolder2$MultiResolutionIconImage_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$MultiResolutionIconImage",
	"java.awt.image.AbstractMultiResolutionImage",
	nullptr,
	_Win32ShellFolder2$MultiResolutionIconImage_FieldInfo_,
	_Win32ShellFolder2$MultiResolutionIconImage_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolder2$MultiResolutionIconImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$MultiResolutionIconImage($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$MultiResolutionIconImage));
}

void Win32ShellFolder2$MultiResolutionIconImage::init$(int32_t baseSize, $Map* resolutionVariants) {
	$AbstractMultiResolutionImage::init$();
	$set(this, resolutionVariants, $new($HashMap));
	this->baseSize = baseSize;
	$nc(this->resolutionVariants)->putAll(resolutionVariants);
}

void Win32ShellFolder2$MultiResolutionIconImage::init$(int32_t baseSize, $Image* image) {
	$AbstractMultiResolutionImage::init$();
	$set(this, resolutionVariants, $new($HashMap));
	this->baseSize = baseSize;
	$nc(this->resolutionVariants)->put($($Integer::valueOf(baseSize)), image);
}

int32_t Win32ShellFolder2$MultiResolutionIconImage::getWidth($ImageObserver* observer) {
	return this->baseSize;
}

int32_t Win32ShellFolder2$MultiResolutionIconImage::getHeight($ImageObserver* observer) {
	return this->baseSize;
}

$Image* Win32ShellFolder2$MultiResolutionIconImage::getBaseImage() {
	return getResolutionVariant((double)this->baseSize, (double)this->baseSize);
}

$Image* Win32ShellFolder2$MultiResolutionIconImage::getResolutionVariant(double width, double height) {
	$useLocalCurrentObjectStackCache();
	int32_t dist = 0;
	$var($Image, retVal, nullptr);
	int32_t w = $cast(int32_t, width);
	int32_t retindex = 0;
	{
		$var($Iterator, i$, $nc($($nc(this->resolutionVariants)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, i, $cast($Integer, i$->next()));
			{
				bool var$0 = retVal == nullptr || dist > $Math::abs($nc(i)->intValue() - w);
				if (!var$0) {
					bool var$1 = dist == $Math::abs($nc(i)->intValue() - w);
					var$0 = (var$1 && $nc(i)->intValue() > retindex);
				}
				if (var$0) {
					retindex = i->intValue();
					dist = $Math::abs(i->intValue() - w);
					$assign(retVal, $cast($Image, $nc(this->resolutionVariants)->get(i)));
					if (i->intValue() == w) {
						break;
					}
				}
			}
		}
	}
	return retVal;
}

$List* Win32ShellFolder2$MultiResolutionIconImage::getResolutionVariants() {
	$useLocalCurrentObjectStackCache();
	return $Collections::unmodifiableList($$new($ArrayList, $($nc(this->resolutionVariants)->values())));
}

Win32ShellFolder2$MultiResolutionIconImage::Win32ShellFolder2$MultiResolutionIconImage() {
}

$Class* Win32ShellFolder2$MultiResolutionIconImage::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$MultiResolutionIconImage, name, initialize, &_Win32ShellFolder2$MultiResolutionIconImage_ClassInfo_, allocate$Win32ShellFolder2$MultiResolutionIconImage);
	return class$;
}

$Class* Win32ShellFolder2$MultiResolutionIconImage::class$ = nullptr;

		} // shell
	} // awt
} // sun