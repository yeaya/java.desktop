#include <com/sun/java/swing/plaf/gtk/Metacity$Privileged.h>

#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/awt/Image.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

#undef GET_IMAGE
#undef GET_THEME_DIR
#undef GET_USER_THEME

using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$Privileged_FieldInfo_[] = {
	{"GET_THEME_DIR", "I", nullptr, $PRIVATE | $STATIC, $staticField(Metacity$Privileged, GET_THEME_DIR)},
	{"GET_USER_THEME", "I", nullptr, $PRIVATE | $STATIC, $staticField(Metacity$Privileged, GET_USER_THEME)},
	{"GET_IMAGE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Metacity$Privileged, GET_IMAGE)},
	{"type", "I", nullptr, $PRIVATE, $field(Metacity$Privileged, type)},
	{"arg", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Metacity$Privileged, arg)},
	{}
};

$MethodInfo _Metacity$Privileged_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Metacity$Privileged::*)()>(&Metacity$Privileged::init$))},
	{"doPrivileged", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$Privileged_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$Privileged", "com.sun.java.swing.plaf.gtk.Metacity", "Privileged", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Metacity$Privileged_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$Privileged",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Metacity$Privileged_FieldInfo_,
	_Metacity$Privileged_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	nullptr,
	_Metacity$Privileged_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$Privileged($Class* clazz) {
	return $of($alloc(Metacity$Privileged));
}

int32_t Metacity$Privileged::GET_THEME_DIR = 0;
int32_t Metacity$Privileged::GET_USER_THEME = 0;
int32_t Metacity$Privileged::GET_IMAGE = 0;

void Metacity$Privileged::init$() {
}

$Object* Metacity$Privileged::doPrivileged(int32_t type, Object$* arg) {
	$beforeCallerSensitive();
	this->type = type;
	$set(this, arg, arg);
	return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>(this)));
}

$Object* Metacity$Privileged::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->type == Metacity$Privileged::GET_THEME_DIR) {
		$init($File);
		$var($String, sep, $File::separator);
		$init($Metacity);
		$var($StringArray, dirs, $new($StringArray, {
			$$str({$Metacity::userHome, sep, ".themes"_s}),
			$($System::getProperty("swing.metacitythemedir"_s)),
			"/usr/X11R6/share/themes"_s,
			"/usr/X11R6/share/gnome/themes"_s,
			"/usr/local/share/themes"_s,
			"/usr/local/share/gnome/themes"_s,
			"/usr/share/themes"_s,
			"/usr/gnome/share/themes"_s,
			"/opt/gnome2/share/themes"_s
		}));
		$var($URL, themeDir, nullptr);
		for (int32_t i = 0; i < dirs->length; ++i) {
			if (dirs->get(i) == nullptr) {
				continue;
			}
			$var($File, dir, $new($File, $$str({dirs->get(i), sep, this->arg, sep, "metacity-1"_s})));
			if ($$new($File, dir, "metacity-theme-1.xml"_s)->canRead()) {
				try {
					$assign(themeDir, $nc($(dir->toURI()))->toURL());
				} catch ($MalformedURLException& ex) {
					$assign(themeDir, nullptr);
				}
				break;
			}
		}
		if (themeDir == nullptr) {
			$var($String, filename, $str({"resources/metacity/"_s, this->arg, "/metacity-1/metacity-theme-1.xml"_s}));
			$var($URL, url, $of(this)->getClass()->getResource(filename));
			if (url != nullptr) {
				$var($String, str, url->toString());
				try {
					$assign(themeDir, $new($URL, $$str({$($nc(str)->substring(0, str->lastIndexOf((int32_t)u'/'))), "/"_s})));
				} catch ($MalformedURLException& ex) {
					$assign(themeDir, nullptr);
				}
			}
		}
		return $of(themeDir);
	} else if (this->type == Metacity$Privileged::GET_USER_THEME) {
		try {
			$init($Metacity);
			$assignStatic($Metacity::userHome, $System::getProperty("user.home"_s));
			$var($String, theme, $System::getProperty("swing.metacitythemename"_s));
			if (theme != nullptr) {
				return $of(theme);
			}
			$var($URL, url, $new($URL, $($nc($($$new($File, $Metacity::userHome)->toURI()))->toURL()), ".gconf/apps/metacity/general/%25gconf.xml"_s));
			$var($Reader, reader, $new($InputStreamReader, $(url->openStream()), "ISO-8859-1"_s));
			$var($chars, buf, $new($chars, 1024));
			$var($StringBuilder, sb, $new($StringBuilder));
			int32_t n = 0;
			while ((n = reader->read(buf)) >= 0) {
				sb->append(buf, 0, n);
			}
			reader->close();
			$var($String, str, sb->toString());
			if (str != nullptr) {
				$var($String, strLowerCase, str->toLowerCase());
				int32_t i = strLowerCase->indexOf("<entry name=\"theme\""_s);
				if (i >= 0) {
					i = strLowerCase->indexOf("<stringvalue>"_s, i);
					if (i > 0) {
						i += "<stringvalue>"_s->length();
						int32_t i2 = str->indexOf((int32_t)u'<', i);
						return $of(str->substring(i, i2));
					}
				}
			}
		} catch ($MalformedURLException& ex) {
		} catch ($IOException& ex) {
		}
		return $of(nullptr);
	} else if (this->type == Metacity$Privileged::GET_IMAGE) {
		return $of($$new($ImageIcon, $cast($URL, this->arg))->getImage());
	} else {
		return $of(nullptr);
	}
}

void clinit$Metacity$Privileged($Class* class$) {
	Metacity$Privileged::GET_THEME_DIR = 0;
	Metacity$Privileged::GET_USER_THEME = 1;
	Metacity$Privileged::GET_IMAGE = 2;
}

Metacity$Privileged::Metacity$Privileged() {
}

$Class* Metacity$Privileged::load$($String* name, bool initialize) {
	$loadClass(Metacity$Privileged, name, initialize, &_Metacity$Privileged_ClassInfo_, clinit$Metacity$Privileged, allocate$Metacity$Privileged);
	return class$;
}

$Class* Metacity$Privileged::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com