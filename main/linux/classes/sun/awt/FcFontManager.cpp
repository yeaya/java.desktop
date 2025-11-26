#include <sun/awt/FcFontManager.h>

#include <java/lang/InternalError.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/FcFontConfiguration.h>
#include <sun/font/FontConfigManager$FcCompFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $FontConfigManager$FcCompFontArray = $Array<::sun::font::FontConfigManager$FcCompFont>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FcFontConfiguration = ::sun::font::FcFontConfiguration;
using $FontConfigManager = ::sun::font::FontConfigManager;
using $FontConfigManager$FcCompFont = ::sun::font::FontConfigManager$FcCompFont;
using $FontConfigManager$FontConfigFont = ::sun::font::FontConfigManager$FontConfigFont;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

$FieldInfo _FcFontManager_FieldInfo_[] = {
	{"fcManager", "Lsun/font/FontConfigManager;", nullptr, $PRIVATE, $field(FcFontManager, fcManager)},
	{}
};

$MethodInfo _FcFontManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FcFontManager::*)()>(&FcFontManager::init$))},
	{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED},
	{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC},
	{"getDefaultPlatformFont", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFontConfigManager", "()Lsun/font/FontConfigManager;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getFontPathNative", "(ZZ)Ljava/lang/String;", nullptr, $NATIVE},
	{}
};

#define _METHOD_INDEX_getFontPathNative 6

$ClassInfo _FcFontManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.FcFontManager",
	"sun.font.SunFontManager",
	nullptr,
	_FcFontManager_FieldInfo_,
	_FcFontManager_MethodInfo_
};

$Object* allocate$FcFontManager($Class* clazz) {
	return $of($alloc(FcFontManager));
}

void FcFontManager::init$() {
	$SunFontManager::init$();
	$set(this, fcManager, nullptr);
}

$FontConfigManager* FcFontManager::getFontConfigManager() {
	$synchronized(this) {
		if (this->fcManager == nullptr) {
			$set(this, fcManager, $new($FontConfigManager));
		}
		return this->fcManager;
	}
}

$FontConfiguration* FcFontManager::createFontConfiguration() {
	$var($FcFontConfiguration, fcFontConfig, $new($FcFontConfiguration, this));
	if (fcFontConfig->init()) {
		return fcFontConfig;
	} else {
		$throwNew($InternalError, "failed to initialize fontconfig"_s);
	}
}

$FontConfiguration* FcFontManager::createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {
	$var($FcFontConfiguration, fcFontConfig, $new($FcFontConfiguration, this, preferLocaleFonts, preferPropFonts));
	if (fcFontConfig->init()) {
		return fcFontConfig;
	} else {
		$throwNew($InternalError, "failed to initialize fontconfig"_s);
	}
}

$StringArray* FcFontManager::getDefaultPlatformFont() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, info, $new($StringArray, 2));
	$nc($(getFontConfigManager()))->initFontConfigFonts(false);
	$var($FontConfigManager$FcCompFontArray, fontConfigFonts, $nc($(getFontConfigManager()))->getFontConfigFonts());
	if (fontConfigFonts != nullptr) {
		for (int32_t i = 0; i < fontConfigFonts->length; ++i) {
			if ("sans"_s->equals($nc(fontConfigFonts->get(i))->fcFamily) && 0 == $nc(fontConfigFonts->get(i))->style) {
				info->set(0, $nc($nc(fontConfigFonts->get(i))->firstFont)->fullName);
				info->set(1, $nc($nc(fontConfigFonts->get(i))->firstFont)->fontFile);
				break;
			}
		}
	}
	if (info->get(0) == nullptr) {
		if (fontConfigFonts != nullptr && fontConfigFonts->length > 0 && $nc($nc(fontConfigFonts->get(0))->firstFont)->fontFile != nullptr && $nc($nc(fontConfigFonts->get(0))->firstFont)->fullName != nullptr) {
			info->set(0, $nc($nc(fontConfigFonts->get(0))->firstFont)->fullName);
			info->set(1, $nc($nc(fontConfigFonts->get(0))->firstFont)->fontFile);
		} else {
			info->set(0, "Dialog"_s);
			info->set(1, "/dialog.ttf"_s);
		}
	}
	return info;
}

$String* FcFontManager::getFontPathNative(bool noType1Fonts, bool isX11GE) {
	$var($String, $ret, nullptr);
	$prepareNative(FcFontManager, getFontPathNative, $String*, bool noType1Fonts, bool isX11GE);
	$assign($ret, $invokeNative(FcFontManager, getFontPathNative, noType1Fonts, isX11GE));
	$finishNative();
	return $ret;
}

$String* FcFontManager::getFontPath(bool noType1Fonts) {
	$synchronized(this) {
		return getFontPathNative(noType1Fonts, false);
	}
}

FcFontManager::FcFontManager() {
}

$Class* FcFontManager::load$($String* name, bool initialize) {
	$loadClass(FcFontManager, name, initialize, &_FcFontManager_ClassInfo_, allocate$FcFontManager);
	return class$;
}

$Class* FcFontManager::class$ = nullptr;

	} // awt
} // sun