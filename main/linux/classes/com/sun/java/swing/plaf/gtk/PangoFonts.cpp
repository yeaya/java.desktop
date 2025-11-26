#include <com/sun/java/swing/plaf/gtk/PangoFonts.h>

#include <java/awt/Font.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/StringTokenizer.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef BOLD
#undef CHARS_DIGITS
#undef ITALIC
#undef PLAIN

using $Font = ::java::awt::Font;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $FontUtilities = ::sun::font::FontUtilities;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _PangoFonts_FieldInfo_[] = {
	{"CHARS_DIGITS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PangoFonts, CHARS_DIGITS)},
	{"fontScale", "D", nullptr, $PRIVATE | $STATIC, $staticField(PangoFonts, fontScale)},
	{}
};

$MethodInfo _PangoFonts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PangoFonts::*)()>(&PangoFonts::init$))},
	{"getFontSize", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&PangoFonts::getFontSize))},
	{"lookupFont", "(Ljava/lang/String;)Ljava/awt/Font;", nullptr, $STATIC, $method(static_cast<$Font*(*)($String*)>(&PangoFonts::lookupFont))},
	{}
};

$ClassInfo _PangoFonts_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.PangoFonts",
	"java.lang.Object",
	nullptr,
	_PangoFonts_FieldInfo_,
	_PangoFonts_MethodInfo_
};

$Object* allocate$PangoFonts($Class* clazz) {
	return $of($alloc(PangoFonts));
}

$String* PangoFonts::CHARS_DIGITS = nullptr;
double PangoFonts::fontScale = 0.0;

void PangoFonts::init$() {
}

$Font* PangoFonts::lookupFont($String* pangoName) {
	$init(PangoFonts);
	$useLocalCurrentObjectStackCache();
	$var($String, family, ""_s);
	int32_t style = $Font::PLAIN;
	int32_t size = 10;
	$var($StringTokenizer, tok, $new($StringTokenizer, pangoName));
	while (tok->hasMoreTokens()) {
		$var($String, word, tok->nextToken());
		if ($nc(word)->equalsIgnoreCase("italic"_s)) {
			style |= $Font::ITALIC;
		} else if (word->equalsIgnoreCase("bold"_s)) {
			style |= $Font::BOLD;
		} else {
			if ($nc(PangoFonts::CHARS_DIGITS)->indexOf((int32_t)word->charAt(0)) != -1) {
				try {
					size = $Integer::parseInt(word);
				} catch ($NumberFormatException& ex) {
				}
			} else {
				if (family->length() > 0) {
					$plusAssign(family, " "_s);
				}
				$plusAssign(family, word);
			}
		}
	}
	double dsize = (double)size;
	int32_t dpi = 96;
	$var($Object, value, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("gnome.Xft/DPI"_s));
	if ($instanceOf($Integer, value)) {
		dpi = $nc(($cast($Integer, value)))->intValue() / 1024;
		if (dpi == -1) {
			dpi = 96;
		}
		if (dpi < 50) {
			dpi = 50;
		}
		dsize = ((double)(dpi * size) / 72.0);
	} else {
		dsize = size * PangoFonts::fontScale;
	}
	size = $cast(int32_t, (dsize + 0.5));
	if (size < 1) {
		size = 1;
	}
	$var($String, fcFamilyLC, family->toLowerCase());
	if ($FontUtilities::mapFcName(fcFamilyLC) != nullptr) {
		$var($Font, font, $FontUtilities::getFontConfigFUIR(fcFamilyLC, style, size));
		$assign(font, $nc(font)->deriveFont(style, (float)dsize));
		return $new($FontUIResource, font);
	} else {
		$var($Font, font, $new($Font, family, style, size));
		$assign(font, font->deriveFont(style, (float)dsize));
		$var($FontUIResource, fuir, $new($FontUIResource, font));
		return $FontUtilities::getCompositeFontUIResource(fuir);
	}
}

int32_t PangoFonts::getFontSize($String* pangoName) {
	$init(PangoFonts);
	$useLocalCurrentObjectStackCache();
	int32_t size = 10;
	$var($StringTokenizer, tok, $new($StringTokenizer, pangoName));
	while (tok->hasMoreTokens()) {
		$var($String, word, tok->nextToken());
		if ($nc(PangoFonts::CHARS_DIGITS)->indexOf((int32_t)$nc(word)->charAt(0)) != -1) {
			try {
				size = $Integer::parseInt(word);
			} catch ($NumberFormatException& ex) {
			}
		}
	}
	return size;
}

void clinit$PangoFonts($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PangoFonts::CHARS_DIGITS, "0123456789"_s);
	{
		PangoFonts::fontScale = 1.0;
		$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		if (!$GraphicsEnvironment::isHeadless()) {
			$var($GraphicsConfiguration, gc, $nc($($nc(ge)->getDefaultScreenDevice()))->getDefaultConfiguration());
			$var($AffineTransform, at, $nc(gc)->getNormalizingTransform());
			PangoFonts::fontScale = $nc(at)->getScaleY();
		}
	}
}

PangoFonts::PangoFonts() {
}

$Class* PangoFonts::load$($String* name, bool initialize) {
	$loadClass(PangoFonts, name, initialize, &_PangoFonts_ClassInfo_, clinit$PangoFonts, allocate$PangoFonts);
	return class$;
}

$Class* PangoFonts::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com