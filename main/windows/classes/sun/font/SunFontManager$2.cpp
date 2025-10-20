#include <sun/font/SunFontManager$2.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef JRE_RANK

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$2_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$2, this$0)},
	{}
};

$MethodInfo _SunFontManager$2_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$2::*)($SunFontManager*)>(&SunFontManager$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$2_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"<init>",
	"()V"
};

$InnerClassInfo _SunFontManager$2_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$2_FieldInfo_,
	_SunFontManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$2_EnclosingMethodInfo_,
	_SunFontManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$2($Class* clazz) {
	return $of($alloc(SunFontManager$2));
}

void SunFontManager$2::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($SunFontManager);
	$init($File);
	$var($File, badFontFile, $new($File, $$str({$SunFontManager::jreFontDirName, $File::separator, "badfonts.txt"_s})));
	if (badFontFile->exists()) {
		$set(this->this$0, badFonts, $new($ArrayList));
		try {
			$var($FileInputStream, fis, $new($FileInputStream, badFontFile));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($BufferedReader, br, $new($BufferedReader, $$new($InputStreamReader, fis)));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									while (true) {
										$var($String, name, br->readLine());
										if (name == nullptr) {
											break;
										} else {
											if ($FontUtilities::debugFonts()) {
												$FontUtilities::logWarning($$str({"read bad font: "_s, name}));
											}
											$nc(this->this$0->badFonts)->add(name);
										}
									}
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										br->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								br->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							fis->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					fis->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($IOException&) {
			$catch();
		}
	}
	$init($FontUtilities);
	if ($FontUtilities::isLinux) {
		this->this$0->registerFontDir($SunFontManager::jreFontDirName);
	}
	this->this$0->registerFontsInDir($SunFontManager::jreFontDirName, true, $Font2D::JRE_RANK, true, false);
	$set(this->this$0, fontConfig, this->this$0->createFontConfiguration());
	$var($StringArray, fontInfo, this->this$0->getDefaultPlatformFont());
	$set(this->this$0, defaultFontName, $nc(fontInfo)->get(0));
	if (this->this$0->defaultFontName == nullptr && $FontUtilities::debugFonts()) {
		$FontUtilities::logWarning("defaultFontName is null"_s);
	}
	$set(this->this$0, defaultFontFileName, fontInfo->get(1));
	$var($String, extraFontPath, $nc(this->this$0->fontConfig)->getExtraFontPath());
	bool prependToPath = false;
	bool appendToPath = false;
	$var($String, dbgFontPath, $System::getProperty("sun.java2d.fontpath"_s));
	if (dbgFontPath != nullptr) {
		if (dbgFontPath->startsWith("prepend:"_s)) {
			prependToPath = true;
			$assign(dbgFontPath, dbgFontPath->substring("prepend:"_s->length()));
		} else if (dbgFontPath->startsWith("append:"_s)) {
			appendToPath = true;
			$assign(dbgFontPath, dbgFontPath->substring("append:"_s->length()));
		}
	}
	if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo($$str({"JRE font directory: "_s, $SunFontManager::jreFontDirName}));
		$FontUtilities::logInfo($$str({"Extra font path: "_s, extraFontPath}));
		$FontUtilities::logInfo($$str({"Debug font path: "_s, dbgFontPath}));
	}
	if (dbgFontPath != nullptr) {
		$set(this->this$0, fontPath, this->this$0->getPlatformFontPath($SunFontManager::noType1Font));
		if (extraFontPath != nullptr) {
			$set(this->this$0, fontPath, $str({extraFontPath, $File::pathSeparator, this->this$0->fontPath}));
		}
		if (appendToPath) {
			$plusAssignField(this->this$0, fontPath, $$str({$File::pathSeparator, dbgFontPath}));
		} else if (prependToPath) {
			$set(this->this$0, fontPath, $str({dbgFontPath, $File::pathSeparator, this->this$0->fontPath}));
		} else {
			$set(this->this$0, fontPath, dbgFontPath);
		}
		this->this$0->registerFontDirs(this->this$0->fontPath);
	} else if (extraFontPath != nullptr) {
		this->this$0->registerFontDirs(extraFontPath);
	}
	this->this$0->initCompositeFonts(this->this$0->fontConfig, nullptr);
	return $of(nullptr);
}

SunFontManager$2::SunFontManager$2() {
}

$Class* SunFontManager$2::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$2, name, initialize, &_SunFontManager$2_ClassInfo_, allocate$SunFontManager$2);
	return class$;
}

$Class* SunFontManager$2::class$ = nullptr;

	} // font
} // sun