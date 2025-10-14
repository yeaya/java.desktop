#include <sun/font/FileFont.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont$1.h>
#include <sun/font/FileFont$CreatedFontFileDisposerRecord.h>
#include <sun/font/FileFontStrike.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontScalerException.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/SunFontManager.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $NativeFontArray = $Array<::sun::font::NativeFont>;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Reference = ::java::lang::ref::Reference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $FileFont$1 = ::sun::font::FileFont$1;
using $FileFont$CreatedFontFileDisposerRecord = ::sun::font::FileFont$CreatedFontFileDisposerRecord;
using $FileFontStrike = ::sun::font::FileFontStrike;
using $Font2D = ::sun::font::Font2D;
using $FontScaler = ::sun::font::FontScaler;
using $FontScalerException = ::sun::font::FontScalerException;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $SunFontManager = ::sun::font::SunFontManager;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FileFont_FieldInfo_[] = {
	{"useJavaRasterizer", "Z", nullptr, $PROTECTED, $field(FileFont, useJavaRasterizer)},
	{"fileSize", "I", nullptr, $PROTECTED, $field(FileFont, fileSize)},
	{"scaler", "Lsun/font/FontScaler;", nullptr, $PROTECTED, $field(FileFont, scaler)},
	{"nativeFonts", "[Lsun/font/NativeFont;", nullptr, $PROTECTED, $field(FileFont, nativeFonts)},
	{"glyphToCharMap", "[C", nullptr, $PROTECTED, $field(FileFont, glyphToCharMap)},
	{}
};

$MethodInfo _FileFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(FileFont::*)($String*,Object$*)>(&FileFont::init$)), "java.awt.FontFormatException"},
	{"canDoStyle", "(I)Z", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, 0},
	{"deregisterFontAndClearStrikeCache", "()V", nullptr, $SYNCHRONIZED},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(JI)F", nullptr, 0},
	{"getGlyphImage", "(JI)J", nullptr, 0},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getPublicFileName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getScaler", "()Lsun/font/FontScaler;", nullptr, $PROTECTED | $ABSTRACT},
	{"getUnitsPerEm", "()J", nullptr, $PROTECTED},
	{"readBlock", "(II)Ljava/nio/ByteBuffer;", nullptr, $ABSTRACT},
	{"setFileToRemove", "(Ljava/util/List;Ljava/io/File;ILsun/font/CreatedFontTracker;)V", "(Ljava/util/List<Lsun/font/Font2D;>;Ljava/io/File;ILsun/font/CreatedFontTracker;)V", $STATIC, $method(static_cast<void(*)($List*,$File*,int32_t,$CreatedFontTracker*)>(&FileFont::setFileToRemove))},
	{}
};

$InnerClassInfo _FileFont_InnerClassesInfo_[] = {
	{"sun.font.FileFont$CreatedFontFileDisposerRecord", "sun.font.FileFont", "CreatedFontFileDisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.FileFont$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FileFont",
	"sun.font.PhysicalFont",
	nullptr,
	_FileFont_FieldInfo_,
	_FileFont_MethodInfo_,
	nullptr,
	nullptr,
	_FileFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FileFont$CreatedFontFileDisposerRecord,sun.font.FileFont$CreatedFontFileDisposerRecord$1,sun.font.FileFont$1"
};

$Object* allocate$FileFont($Class* clazz) {
	return $of($alloc(FileFont));
}

void FileFont::init$($String* platname, Object$* nativeNames) {
	$PhysicalFont::init$(platname, nativeNames);
	this->useJavaRasterizer = true;
}

$FontStrike* FileFont::createStrike($FontStrikeDesc* desc) {
	return $new($FileFontStrike, this, desc);
}

bool FileFont::canDoStyle(int32_t style) {
	return true;
}

void FileFont::setFileToRemove($List* fonts, $File* file, int32_t cnt, $CreatedFontTracker* tracker) {
	$init(FileFont);
	$var($FileFont$CreatedFontFileDisposerRecord, dr, $new($FileFont$CreatedFontFileDisposerRecord, file, cnt, tracker));
	{
		$var($Iterator, i$, $nc(fonts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Font2D, f, $cast($Font2D, i$->next()));
			{
				$Disposer::addObjectRecord(f, dr);
			}
		}
	}
}

void FileFont::deregisterFontAndClearStrikeCache() {
	$synchronized(this) {
		$var($SunFontManager, fm, $SunFontManager::getInstance());
		$nc(fm)->deRegisterBadFont(this);
		{
			$var($Iterator, i$, $nc($($nc(this->strikeCache)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Reference, strikeRef, $cast($Reference, i$->next()));
				{
					if (strikeRef != nullptr) {
						$var($FileFontStrike, strike, $cast($FileFontStrike, strikeRef->get()));
						if (strike != nullptr && strike->pScalerContext != (int64_t)0) {
							$nc(this->scaler)->invalidateScalerContext(strike->pScalerContext);
						}
					}
				}
			}
		}
		if (this->scaler != nullptr) {
			$nc(this->scaler)->disposeScaler();
		}
		$set(this, scaler, $FontScaler::getNullScaler());
	}
}

$StrikeMetrics* FileFont::getFontMetrics(int64_t pScalerContext) {
	try {
		return $nc($(getScaler()))->getFontMetrics(pScalerContext);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getFontMetrics(pScalerContext);
	}
	$shouldNotReachHere();
}

float FileFont::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	try {
		return $nc($(getScaler()))->getGlyphAdvance(pScalerContext, glyphCode);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphAdvance(pScalerContext, glyphCode);
	}
	$shouldNotReachHere();
}

void FileFont::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	try {
		$nc($(getScaler()))->getGlyphMetrics(pScalerContext, glyphCode, metrics);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		getGlyphMetrics(pScalerContext, glyphCode, metrics);
	}
}

int64_t FileFont::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	try {
		return $nc($(getScaler()))->getGlyphImage(pScalerContext, glyphCode);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphImage(pScalerContext, glyphCode);
	}
	$shouldNotReachHere();
}

$Rectangle2D$Float* FileFont::getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {
	try {
		return $nc($(getScaler()))->getGlyphOutlineBounds(pScalerContext, glyphCode);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphOutlineBounds(pScalerContext, glyphCode);
	}
	$shouldNotReachHere();
}

$GeneralPath* FileFont::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	try {
		return $nc($(getScaler()))->getGlyphOutline(pScalerContext, glyphCode, x, y);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphOutline(pScalerContext, glyphCode, x, y);
	}
	$shouldNotReachHere();
}

$GeneralPath* FileFont::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	try {
		return $nc($(getScaler()))->getGlyphVectorOutline(pScalerContext, glyphs, numGlyphs, x, y);
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphVectorOutline(pScalerContext, glyphs, numGlyphs, x, y);
	}
	$shouldNotReachHere();
}

int64_t FileFont::getUnitsPerEm() {
	return $nc($(getScaler()))->getUnitsPerEm();
}

$String* FileFont::getPublicFileName() {
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		return this->platName;
	}
	bool canReadProperty = true;
	try {
		$nc(sm)->checkPropertyAccess("java.io.tmpdir"_s);
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		canReadProperty = false;
	}
	if (canReadProperty) {
		return this->platName;
	}
	$var($File, f, $new($File, this->platName));
	$init($Boolean);
	$var($Boolean, isTmpFile, $Boolean::FALSE);
	try {
		$assign(isTmpFile, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($FileFont$1, this, f)))));
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, e, $catch());
		$assign(isTmpFile, $Boolean::TRUE);
	}
	return $nc(isTmpFile)->booleanValue() ? "temp file"_s : this->platName;
}

FileFont::FileFont() {
}

$Class* FileFont::load$($String* name, bool initialize) {
	$loadClass(FileFont, name, initialize, &_FileFont_ClassInfo_, allocate$FileFont);
	return class$;
}

$Class* FileFont::class$ = nullptr;

	} // font
} // sun