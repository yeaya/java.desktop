#include <sun/awt/X11FontManager.h>

#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/awt/FcFontManager.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FcFontConfiguration.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontAccess.h>
#include <sun/font/FontConfigManager.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/MFontConfiguration.h>
#include <sun/font/NativeFont.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef ADD_STYLE_NAME_FIELD
#undef AVERAGE_WIDTH_FIELD
#undef CHARSET_ENCODING_FIELD
#undef CHARSET_REGISTRY_FIELD
#undef ENGLISH
#undef FAMILY_NAME_FIELD
#undef FOUNDRY_FIELD
#undef PIXEL_SIZE_FIELD
#undef POINT_SIZE_FIELD
#undef RESOLUTION_X_FIELD
#undef RESOLUTION_Y_FIELD
#undef SETWIDTH_NAME_FIELD
#undef SLANT_FIELD
#undef SPACING_FIELD
#undef TT_EOF
#undef TT_EOL
#undef TT_NUMBER
#undef TT_WORD
#undef WEIGHT_NAME_FIELD

using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $FcFontManager = ::sun::awt::FcFontManager;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $CompositeFont = ::sun::font::CompositeFont;
using $FcFontConfiguration = ::sun::font::FcFontConfiguration;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontAccess = ::sun::font::FontAccess;
using $FontConfigManager = ::sun::font::FontConfigManager;
using $FontUtilities = ::sun::font::FontUtilities;
using $MFontConfiguration = ::sun::font::MFontConfiguration;
using $NativeFont = ::sun::font::NativeFont;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

$FieldInfo _X11FontManager_FieldInfo_[] = {
	{"FOUNDRY_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, FOUNDRY_FIELD)},
	{"FAMILY_NAME_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, FAMILY_NAME_FIELD)},
	{"WEIGHT_NAME_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, WEIGHT_NAME_FIELD)},
	{"SLANT_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, SLANT_FIELD)},
	{"SETWIDTH_NAME_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, SETWIDTH_NAME_FIELD)},
	{"ADD_STYLE_NAME_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, ADD_STYLE_NAME_FIELD)},
	{"PIXEL_SIZE_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, PIXEL_SIZE_FIELD)},
	{"POINT_SIZE_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, POINT_SIZE_FIELD)},
	{"RESOLUTION_X_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, RESOLUTION_X_FIELD)},
	{"RESOLUTION_Y_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, RESOLUTION_Y_FIELD)},
	{"SPACING_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, SPACING_FIELD)},
	{"AVERAGE_WIDTH_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, AVERAGE_WIDTH_FIELD)},
	{"CHARSET_REGISTRY_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, CHARSET_REGISTRY_FIELD)},
	{"CHARSET_ENCODING_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11FontManager, CHARSET_ENCODING_FIELD)},
	{"fontNameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(X11FontManager, fontNameMap)},
	{"xlfdMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Vector<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $staticField(X11FontManager, xlfdMap)},
	{"xFontDirsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(X11FontManager, xFontDirsMap)},
	{"fontConfigDirs", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(X11FontManager, fontConfigDirs)},
	{"registeredDirs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(X11FontManager, registeredDirs)},
	{"fontdirs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(X11FontManager, fontdirs)},
	{}
};

$MethodInfo _X11FontManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11FontManager::*)()>(&X11FontManager::init$))},
	{"addFontToPlatformFontPath", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED},
	{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC},
	{"getFileNameFromPlatformName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileNameFromXLFD", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(X11FontManager::*)($String*)>(&X11FontManager::getFileNameFromXLFD))},
	{"getFontConfigFUIR", "(Ljava/lang/String;II)Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getInstance", "()Lsun/awt/X11FontManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X11FontManager*(*)()>(&X11FontManager::getInstance))},
	{"getNativeNames", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getPlatformFontPathFromFontConfig", "()V", nullptr, $PRIVATE, $method(static_cast<void(X11FontManager::*)()>(&X11FontManager::getPlatformFontPathFromFontConfig))},
	{"getX11FontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&X11FontManager::getX11FontName))},
	{"isHeadless", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(X11FontManager::*)()>(&X11FontManager::isHeadless))},
	{"loadFonts", "()V", nullptr, $PUBLIC},
	{"registerFontDir", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"registerFontDirs", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"registerPlatformFontsUsedByFontConfiguration", "()V", nullptr, $PROTECTED},
	{"specificFontIDForName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(X11FontManager::*)($String*)>(&X11FontManager::specificFontIDForName))},
	{"switchFontIDForName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(X11FontManager::*)($String*)>(&X11FontManager::switchFontIDForName))},
	{}
};

$ClassInfo _X11FontManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11FontManager",
	"sun.awt.FcFontManager",
	nullptr,
	_X11FontManager_FieldInfo_,
	_X11FontManager_MethodInfo_
};

$Object* allocate$X11FontManager($Class* clazz) {
	return $of($alloc(X11FontManager));
}

$Map* X11FontManager::fontNameMap = nullptr;
$Map* X11FontManager::xlfdMap = nullptr;
$Map* X11FontManager::xFontDirsMap = nullptr;
$HashSet* X11FontManager::fontConfigDirs = nullptr;
$HashMap* X11FontManager::registeredDirs = nullptr;
$StringArray* X11FontManager::fontdirs = nullptr;

void X11FontManager::init$() {
	$FcFontManager::init$();
}

X11FontManager* X11FontManager::getInstance() {
	$init(X11FontManager);
	return $cast(X11FontManager, $SunFontManager::getInstance());
}

$String* X11FontManager::getFileNameFromPlatformName($String* platName) {
	$useLocalCurrentObjectStackCache();
	if ($nc(platName)->startsWith("/"_s)) {
		return platName;
	}
	$var($String, fileName, nullptr);
	$var($String, fontID, specificFontIDForName(platName));
	$assign(fileName, $FcFontManager::getFileNameFromPlatformName(platName));
	if (fileName != nullptr) {
		bool var$0 = isHeadless();
		if (var$0 && fileName->startsWith("-"_s)) {
			return nullptr;
		}
		if (fileName->startsWith("/"_s)) {
			$var($Vector, xVal, $cast($Vector, $nc(X11FontManager::xlfdMap)->get(fileName)));
			if (xVal == nullptr) {
				if ($nc($(getFontConfiguration()))->needToSearchForFile(fileName)) {
					$assign(fileName, nullptr);
				}
				if (fileName != nullptr) {
					$assign(xVal, $new($Vector));
					xVal->add(platName);
					$nc(X11FontManager::xlfdMap)->put(fileName, xVal);
				}
			} else if (!$nc(xVal)->contains(platName)) {
				xVal->add(platName);
			}
		}
		if (fileName != nullptr) {
			$nc(X11FontManager::fontNameMap)->put(fontID, fileName);
			return fileName;
		}
	}
	if (fontID != nullptr) {
		$assign(fileName, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
		if (this->fontPath == nullptr && (fileName == nullptr || !$nc(fileName)->startsWith("/"_s))) {
			if ($FontUtilities::debugFonts()) {
				$FontUtilities::logWarning($$str({"** Registering all font paths because can\'t find file for "_s, platName}));
			}
			$init($SunFontManager);
			$set(this, fontPath, getPlatformFontPath($SunFontManager::noType1Font));
			registerFontDirs(this->fontPath);
			if ($FontUtilities::debugFonts()) {
				$FontUtilities::logWarning("** Finished registering all font paths"_s);
			}
			$assign(fileName, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
		}
		if (fileName == nullptr && !isHeadless()) {
			$assign(fileName, getX11FontName(platName));
		}
		if (fileName == nullptr) {
			$assign(fontID, switchFontIDForName(platName));
			$assign(fileName, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
		}
		if (fileName != nullptr) {
			$nc(X11FontManager::fontNameMap)->put(fontID, fileName);
		}
	}
	return fileName;
}

$StringArray* X11FontManager::getNativeNames($String* fontFileName, $String* platformName) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, nativeNames, nullptr);
	if (($assign(nativeNames, $cast($Vector, $nc(X11FontManager::xlfdMap)->get(fontFileName)))) == nullptr) {
		if (platformName == nullptr) {
			return nullptr;
		} else {
			$var($StringArray, natNames, $new($StringArray, 1));
			natNames->set(0, platformName);
			return natNames;
		}
	} else {
		int32_t len = $nc(nativeNames)->size();
		return $fcast($StringArray, nativeNames->toArray($$new($StringArray, len)));
	}
}

void X11FontManager::registerFontDir($String* path) {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo($$str({"ParseFontDir "_s, path}));
	}
	$init($File);
	$var($File, fontsDotDir, $new($File, $$str({path, $File::separator, "fonts.dir"_s})));
	$var($FileReader, fr, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (fontsDotDir->canRead()) {
					$assign(fr, $new($FileReader, fontsDotDir));
					$var($BufferedReader, br, $new($BufferedReader, fr, 8192));
					$var($StreamTokenizer, st, $new($StreamTokenizer, static_cast<$Reader*>(br)));
					st->eolIsSignificant(true);
					int32_t ttype = st->nextToken();
					if (ttype == $StreamTokenizer::TT_NUMBER) {
						int32_t numEntries = $cast(int32_t, st->nval);
						ttype = st->nextToken();
						if (ttype == $StreamTokenizer::TT_EOL) {
							st->resetSyntax();
							st->wordChars(32, 127);
							st->wordChars(128 + 32, 255);
							st->whitespaceChars(0, 31);
							for (int32_t i = 0; i < numEntries; ++i) {
								ttype = st->nextToken();
								if (ttype == $StreamTokenizer::TT_EOF) {
									break;
								}
								if (ttype != $StreamTokenizer::TT_WORD) {
									break;
								}
								int32_t breakPos = $nc(st->sval)->indexOf((int32_t)u' ');
								if (breakPos <= 0) {
									++numEntries;
									ttype = st->nextToken();
									if (ttype != $StreamTokenizer::TT_EOL) {
										break;
									}
									continue;
								}
								if ($nc(st->sval)->charAt(0) == u'!') {
									++numEntries;
									ttype = st->nextToken();
									if (ttype != $StreamTokenizer::TT_EOL) {
										break;
									}
									continue;
								}
								$var($String, fileName, $nc(st->sval)->substring(0, breakPos));
								int32_t lastColon = fileName->lastIndexOf((int32_t)u':');
								if (lastColon > 0) {
									if (lastColon + 1 >= fileName->length()) {
										continue;
									}
									$assign(fileName, fileName->substring(lastColon + 1));
								}
								$var($String, fontPart, $nc(st->sval)->substring(breakPos + 1));
								$var($String, fontID, specificFontIDForName(fontPart));
								$var($String, sVal, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
								if ($FontUtilities::debugFonts()) {
									$FontUtilities::logInfo($$str({"file="_s, fileName, " xlfd="_s, fontPart}));
									$FontUtilities::logInfo($$str({"fontID="_s, fontID, " sVal="_s, sVal}));
								}
								$var($String, fullPath, nullptr);
								try {
									$var($File, file, $new($File, path, fileName));
									if (X11FontManager::xFontDirsMap == nullptr) {
										$assignStatic(X11FontManager::xFontDirsMap, $new($HashMap));
									}
									$nc(X11FontManager::xFontDirsMap)->put(fontID, path);
									$assign(fullPath, file->getCanonicalPath());
								} catch ($IOException& e) {
									$assign(fullPath, $str({path, $File::separator, fileName}));
								}
								$var($Vector, xVal, $cast($Vector, $nc(X11FontManager::xlfdMap)->get(fullPath)));
								if ($FontUtilities::debugFonts()) {
									$FontUtilities::logInfo($$str({"fullPath="_s, fullPath, " xVal="_s, xVal}));
								}
								bool var$1 = (xVal == nullptr || !$nc(xVal)->contains(fontPart)) && (sVal == nullptr);
								if (var$1 || !$nc(sVal)->startsWith("/"_s)) {
									if ($FontUtilities::debugFonts()) {
										$FontUtilities::logInfo($$str({"Map fontID:"_s, fontID, "to file:"_s, fullPath}));
									}
									$nc(X11FontManager::fontNameMap)->put(fontID, fullPath);
									if (xVal == nullptr) {
										$assign(xVal, $new($Vector));
										$nc(X11FontManager::xlfdMap)->put(fullPath, xVal);
									}
									$nc(xVal)->add(fontPart);
								}
								ttype = st->nextToken();
								if (ttype != $StreamTokenizer::TT_EOL) {
									break;
								}
							}
						}
					}
					fr->close();
				}
			} catch ($IOException& ioe1) {
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (fr != nullptr) {
				try {
					fr->close();
				} catch ($IOException& ioe2) {
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11FontManager::loadFonts() {
	$FcFontManager::loadFonts();
	$assignStatic(X11FontManager::xFontDirsMap, nullptr);
	$assignStatic(X11FontManager::xlfdMap, $new($HashMap, 1));
	$assignStatic(X11FontManager::fontNameMap, $new($HashMap, 1));
}

$String* X11FontManager::getX11FontName($String* platName) {
	$init(X11FontManager);
	$var($String, xlfd, $nc(platName)->replaceAll("%d"_s, "*"_s));
	if ($NativeFont::fontExists(xlfd)) {
		return xlfd;
	} else {
		return nullptr;
	}
}

bool X11FontManager::isHeadless() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	return $GraphicsEnvironment::isHeadless();
}

$String* X11FontManager::specificFontIDForName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ints, hPos, $new($ints, 14));
	int32_t hyphenCnt = 1;
	int32_t pos = 1;
	while (pos != -1 && hyphenCnt < 14) {
		pos = $nc(name)->indexOf((int32_t)u'-', pos);
		if (pos != -1) {
			hPos->set(hyphenCnt++, pos);
			++pos;
		}
	}
	if (hyphenCnt != 14) {
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logSevere($$str({"Font Configuration Font ID is malformed:"_s, name}));
		}
		return name;
	}
	$var($String, var$0, $($nc(name)->substring(hPos->get(X11FontManager::FAMILY_NAME_FIELD - 1), hPos->get(X11FontManager::SETWIDTH_NAME_FIELD))));
	$var($String, sb, $concat(var$0, $(name->substring(hPos->get(X11FontManager::CHARSET_REGISTRY_FIELD - 1)))));
	$init($Locale);
	$var($String, retval, $nc(sb)->toLowerCase($Locale::ENGLISH));
	return retval;
}

$String* X11FontManager::switchFontIDForName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ints, hPos, $new($ints, 14));
	int32_t hyphenCnt = 1;
	int32_t pos = 1;
	while (pos != -1 && hyphenCnt < 14) {
		pos = $nc(name)->indexOf((int32_t)u'-', pos);
		if (pos != -1) {
			hPos->set(hyphenCnt++, pos);
			++pos;
		}
	}
	if (hyphenCnt != 14) {
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logSevere($$str({"Font Configuration Font ID is malformed:"_s, name}));
		}
		return name;
	}
	$var($String, slant, $nc(name)->substring(hPos->get(X11FontManager::SLANT_FIELD - 1) + 1, hPos->get(X11FontManager::SLANT_FIELD)));
	$var($String, family, name->substring(hPos->get(X11FontManager::FAMILY_NAME_FIELD - 1) + 1, hPos->get(X11FontManager::FAMILY_NAME_FIELD)));
	$var($String, registry, name->substring(hPos->get(X11FontManager::CHARSET_REGISTRY_FIELD - 1) + 1, hPos->get(X11FontManager::CHARSET_REGISTRY_FIELD)));
	$var($String, encoding, name->substring(hPos->get(X11FontManager::CHARSET_ENCODING_FIELD - 1) + 1));
	if (slant->equals("i"_s)) {
		$assign(slant, "o"_s);
	} else if (slant->equals("o"_s)) {
		$assign(slant, "i"_s);
	}
	bool var$1 = family->equals("itc zapfdingbats"_s);
	bool var$0 = var$1 && registry->equals("sun"_s);
	if (var$0 && encoding->equals("fontspecific"_s)) {
		$assign(registry, "adobe"_s);
	}
	$var($String, var$4, $$str({$(name->substring(hPos->get(X11FontManager::FAMILY_NAME_FIELD - 1), hPos->get(X11FontManager::SLANT_FIELD - 1) + 1)), slant}));
	$var($String, var$3, $$concat(var$4, $(name->substring(hPos->get(X11FontManager::SLANT_FIELD), hPos->get(X11FontManager::SETWIDTH_NAME_FIELD) + 1))));
	$var($String, var$2, $$concat(var$3, registry));
	$var($String, sb, $concat(var$2, $(name->substring(hPos->get(X11FontManager::CHARSET_ENCODING_FIELD - 1)))));
	$init($Locale);
	$var($String, retval, $nc(sb)->toLowerCase($Locale::ENGLISH));
	return retval;
}

$String* X11FontManager::getFileNameFromXLFD($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, fileName, nullptr);
	$var($String, fontID, specificFontIDForName(name));
	if (fontID != nullptr) {
		$assign(fileName, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
		if (fileName == nullptr) {
			$assign(fontID, switchFontIDForName(name));
			$assign(fileName, $cast($String, $nc(X11FontManager::fontNameMap)->get(fontID)));
		}
		if (fileName == nullptr) {
			$assign(fileName, getDefaultFontFile());
		}
	}
	return fileName;
}

void X11FontManager::registerFontDirs($String* pathName) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringTokenizer, parser, $new($StringTokenizer, pathName, $File::pathSeparator));
	try {
		while (parser->hasMoreTokens()) {
			$var($String, dirPath, parser->nextToken());
			if (dirPath != nullptr && !$nc(X11FontManager::registeredDirs)->containsKey(dirPath)) {
				$nc(X11FontManager::registeredDirs)->put(dirPath, nullptr);
				registerFontDir(dirPath);
			}
		}
	} catch ($NoSuchElementException& e) {
	}
}

void X11FontManager::addFontToPlatformFontPath($String* platformName) {
	$useLocalCurrentObjectStackCache();
	getPlatformFontPathFromFontConfig();
	if (X11FontManager::xFontDirsMap != nullptr) {
		$var($String, fontID, specificFontIDForName(platformName));
		$var($String, dirName, $cast($String, $nc(X11FontManager::xFontDirsMap)->get(fontID)));
		if (dirName != nullptr) {
			$nc(X11FontManager::fontConfigDirs)->add(dirName);
		}
	}
	return;
}

void X11FontManager::getPlatformFontPathFromFontConfig() {
	$useLocalCurrentObjectStackCache();
	if (X11FontManager::fontConfigDirs == nullptr) {
		$assignStatic(X11FontManager::fontConfigDirs, $nc($(getFontConfiguration()))->getAWTFontPathSet());
		if ($FontUtilities::debugFonts() && X11FontManager::fontConfigDirs != nullptr) {
			$var($StringArray, names, $fcast($StringArray, $nc(X11FontManager::fontConfigDirs)->toArray($$new($StringArray, 0))));
			for (int32_t i = 0; i < $nc(names)->length; ++i) {
				$FontUtilities::logInfo($$str({"awtfontpath : "_s, names->get(i)}));
			}
		}
	}
}

void X11FontManager::registerPlatformFontsUsedByFontConfiguration() {
	$useLocalCurrentObjectStackCache();
	getPlatformFontPathFromFontConfig();
	if (X11FontManager::fontConfigDirs == nullptr) {
		return;
	}
	$init($FontUtilities);
	if ($FontUtilities::isLinux) {
		$init($SunFontManager);
		$init($File);
		$nc(X11FontManager::fontConfigDirs)->add($$str({$SunFontManager::jreLibDirName, $File::separator, "oblique-fonts"_s}));
	}
	$assignStatic(X11FontManager::fontdirs, $fcast($StringArray, $nc(X11FontManager::fontConfigDirs)->toArray($$new($StringArray, 0))));
}

$FontConfiguration* X11FontManager::createFontConfiguration() {
	$useLocalCurrentObjectStackCache();
	$var($FontConfiguration, mFontConfig, $new($MFontConfiguration, this));
	$init($FontUtilities);
	if ($FontUtilities::isLinux && !mFontConfig->foundOsSpecificFile()) {
		$var($FcFontConfiguration, fcFontConfig, $new($FcFontConfiguration, this));
		if (fcFontConfig->init()) {
			return fcFontConfig;
		}
	}
	mFontConfig->init();
	return mFontConfig;
}

$FontConfiguration* X11FontManager::createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {
	return $new($MFontConfiguration, this, preferLocaleFonts, preferPropFonts);
}

$String* X11FontManager::getFontPath(bool noType1Fonts) {
	$synchronized(this) {
		isHeadless();
		return getFontPathNative(noType1Fonts, true);
	}
}

$FontUIResource* X11FontManager::getFontConfigFUIR($String* family, int32_t style, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($CompositeFont, font2D, $nc($(getFontConfigManager()))->getFontConfigFont(family, style));
	if (font2D == nullptr) {
		return $new($FontUIResource, family, style, size);
	}
	$var($FontUIResource, fuir, $new($FontUIResource, $($nc(font2D)->getFamilyName(nullptr)), style, size));
	$nc($($FontAccess::getFontAccess()))->setFont2D(fuir, $nc(font2D)->handle);
	$nc($($FontAccess::getFontAccess()))->setCreatedFont(fuir);
	return fuir;
}

void clinit$X11FontManager($Class* class$) {
	$assignStatic(X11FontManager::fontNameMap, $new($HashMap));
	$assignStatic(X11FontManager::xlfdMap, $new($HashMap));
	$assignStatic(X11FontManager::fontConfigDirs, nullptr);
	$assignStatic(X11FontManager::registeredDirs, $new($HashMap));
	$assignStatic(X11FontManager::fontdirs, nullptr);
}

X11FontManager::X11FontManager() {
}

$Class* X11FontManager::load$($String* name, bool initialize) {
	$loadClass(X11FontManager, name, initialize, &_X11FontManager_ClassInfo_, clinit$X11FontManager, allocate$X11FontManager);
	return class$;
}

$Class* X11FontManager::class$ = nullptr;

	} // awt
} // sun