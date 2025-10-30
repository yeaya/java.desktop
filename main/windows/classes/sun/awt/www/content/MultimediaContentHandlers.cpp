#include <sun/awt/www/content/MultimediaContentHandlers.h>

#include <java/net/ContentHandler.h>
#include <sun/awt/www/content/audio/aiff.h>
#include <sun/awt/www/content/audio/basic.h>
#include <sun/awt/www/content/audio/wav.h>
#include <sun/awt/www/content/audio/x_aiff.h>
#include <sun/awt/www/content/audio/x_wav.h>
#include <sun/awt/www/content/image/gif.h>
#include <sun/awt/www/content/image/jpeg.h>
#include <sun/awt/www/content/image/png.h>
#include <sun/awt/www/content/image/x_xbitmap.h>
#include <sun/awt/www/content/image/x_xpixmap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $ContentHandlerFactory = ::java::net::ContentHandlerFactory;
using $aiff = ::sun::awt::www::content::audio::aiff;
using $basic = ::sun::awt::www::content::audio::basic;
using $wav = ::sun::awt::www::content::audio::wav;
using $x_aiff = ::sun::awt::www::content::audio::x_aiff;
using $x_wav = ::sun::awt::www::content::audio::x_wav;
using $gif = ::sun::awt::www::content::image::gif;
using $jpeg = ::sun::awt::www::content::image::jpeg;
using $png = ::sun::awt::www::content::image::png;
using $x_xbitmap = ::sun::awt::www::content::image::x_xbitmap;
using $x_xpixmap = ::sun::awt::www::content::image::x_xpixmap;

namespace sun {
	namespace awt {
		namespace www {
			namespace content {

$MethodInfo _MultimediaContentHandlers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultimediaContentHandlers::*)()>(&MultimediaContentHandlers::init$))},
	{"createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultimediaContentHandlers_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.www.content.MultimediaContentHandlers",
	"java.lang.Object",
	"java.net.ContentHandlerFactory",
	nullptr,
	_MultimediaContentHandlers_MethodInfo_
};

$Object* allocate$MultimediaContentHandlers($Class* clazz) {
	return $of($alloc(MultimediaContentHandlers));
}

void MultimediaContentHandlers::init$() {
}

$ContentHandler* MultimediaContentHandlers::createContentHandler($String* mimetype) {
	{
		$var($String, s1880$, mimetype);
		int32_t tmp1880$ = -1;
		switch ($nc(s1880$)->hashCode()) {
		case 0x59AC5981:
			{
				if (s1880$->equals("audio/aiff"_s)) {
					tmp1880$ = 0;
				}
				break;
			}
		case (int32_t)0xDBE97CB5:
			{
				if (s1880$->equals("audio/basic"_s)) {
					tmp1880$ = 1;
				}
				break;
			}
		case 0x0B26E933:
			{
				if (s1880$->equals("audio/wav"_s)) {
					tmp1880$ = 2;
				}
				break;
			}
		case (int32_t)0xC3EBC376:
			{
				if (s1880$->equals("audio/x-aiff"_s)) {
					tmp1880$ = 3;
				}
				break;
			}
		case (int32_t)0xDD07EC9E:
			{
				if (s1880$->equals("audio/x-wav"_s)) {
					tmp1880$ = 4;
				}
				break;
			}
		case (int32_t)0xCB977110:
			{
				if (s1880$->equals("image/gif"_s)) {
					tmp1880$ = 5;
				}
				break;
			}
		case (int32_t)0xA758289C:
			{
				if (s1880$->equals("image/jpeg"_s)) {
					tmp1880$ = 6;
				}
				break;
			}
		case (int32_t)0xCB979375:
			{
				if (s1880$->equals("image/png"_s)) {
					tmp1880$ = 7;
				}
				break;
			}
		case 0x52105B9E:
			{
				if (s1880$->equals("image/x-xbitmap"_s)) {
					tmp1880$ = 8;
				}
				break;
			}
		case 0x69F605CC:
			{
				if (s1880$->equals("image/x-xpixmap"_s)) {
					tmp1880$ = 9;
				}
				break;
			}
		}
		switch (tmp1880$) {
		case 0:
			{
				return $new($aiff);
			}
		case 1:
			{
				return $new($basic);
			}
		case 2:
			{
				return $new($wav);
			}
		case 3:
			{
				return $new($x_aiff);
			}
		case 4:
			{
				return $new($x_wav);
			}
		case 5:
			{
				return $new($gif);
			}
		case 6:
			{
				return $new($jpeg);
			}
		case 7:
			{
				return $new($png);
			}
		case 8:
			{
				return $new($x_xbitmap);
			}
		case 9:
			{
				return $new($x_xpixmap);
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

MultimediaContentHandlers::MultimediaContentHandlers() {
}

$Class* MultimediaContentHandlers::load$($String* name, bool initialize) {
	$loadClass(MultimediaContentHandlers, name, initialize, &_MultimediaContentHandlers_ClassInfo_, allocate$MultimediaContentHandlers);
	return class$;
}

$Class* MultimediaContentHandlers::class$ = nullptr;

			} // content
		} // www
	} // awt
} // sun