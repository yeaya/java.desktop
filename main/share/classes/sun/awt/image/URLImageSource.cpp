#include <sun/awt/image/URLImageSource.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/Permission.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/net/util/URLUtil.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Permission = ::java::security::Permission;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $URLUtil = ::sun::net::util::URLUtil;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _URLImageSource_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, 0, $field(URLImageSource, url)},
	{"conn", "Ljava/net/URLConnection;", nullptr, 0, $field(URLImageSource, conn)},
	{"actualHost", "Ljava/lang/String;", nullptr, 0, $field(URLImageSource, actualHost)},
	{"actualPort", "I", nullptr, 0, $field(URLImageSource, actualPort)},
	{}
};

$MethodInfo _URLImageSource_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(URLImageSource::*)($URL*)>(&URLImageSource::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URLImageSource::*)($String*)>(&URLImageSource::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/net/URL;Ljava/net/URLConnection;)V", nullptr, $PUBLIC, $method(static_cast<void(URLImageSource::*)($URL*,$URLConnection*)>(&URLImageSource::init$))},
	{"<init>", "(Ljava/net/URLConnection;)V", nullptr, $PUBLIC, $method(static_cast<void(URLImageSource::*)($URLConnection*)>(&URLImageSource::init$))},
	{"checkSecurity", "(Ljava/lang/Object;Z)Z", nullptr, $FINAL},
	{"getConnection", "()Ljava/net/URLConnection;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$URLConnection*(URLImageSource::*)()>(&URLImageSource::getConnection)), "java.io.IOException"},
	{"getDecoder", "()Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _URLImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.URLImageSource",
	"sun.awt.image.InputStreamImageSource",
	nullptr,
	_URLImageSource_FieldInfo_,
	_URLImageSource_MethodInfo_
};

$Object* allocate$URLImageSource($Class* clazz) {
	return $of($alloc(URLImageSource));
}

void URLImageSource::init$($URL* u) {
	$useLocalCurrentObjectStackCache();
	$InputStreamImageSource::init$();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		try {
			$var($Permission, perm, $URLUtil::getConnectPermission(u));
			if (perm != nullptr) {
				sm->checkPermission(perm);
			}
		} catch ($IOException& ioe) {
			$var($String, var$0, $nc(u)->getHost());
			sm->checkConnect(var$0, u->getPort());
		}
	}
	$set(this, url, u);
}

void URLImageSource::init$($String* href) {
	URLImageSource::init$($$new($URL, nullptr, href));
}

void URLImageSource::init$($URL* u, $URLConnection* uc) {
	URLImageSource::init$(u);
	$set(this, conn, uc);
}

void URLImageSource::init$($URLConnection* uc) {
	URLImageSource::init$($($nc(uc)->getURL()), uc);
}

bool URLImageSource::checkSecurity(Object$* context, bool quiet) {
	if (this->actualHost != nullptr) {
		try {
			$var($SecurityManager, security, $System::getSecurityManager());
			if (security != nullptr) {
				security->checkConnect(this->actualHost, this->actualPort, context);
			}
		} catch ($SecurityException& e) {
			if (!quiet) {
				$throw(e);
			}
			return false;
		}
	}
	return true;
}

$URLConnection* URLImageSource::getConnection() {
	$synchronized(this) {
		$var($URLConnection, c, nullptr);
		if (this->conn != nullptr) {
			$assign(c, this->conn);
			$set(this, conn, nullptr);
		} else {
			$assign(c, $nc(this->url)->openConnection());
		}
		return c;
	}
}

$ImageDecoder* URLImageSource::getDecoder() {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, is, nullptr);
	$var($String, type, nullptr);
	$var($URLConnection, c, nullptr);
	try {
		$assign(c, getConnection());
		$assign(is, $nc(c)->getInputStream());
		$assign(type, c->getContentType());
		$var($URL, u, c->getURL());
		bool var$0 = u != this->url;
		if (var$0) {
			bool var$1 = !$nc($($nc(u)->getHost()))->equals($($nc(this->url)->getHost()));
			if (!var$1) {
				int32_t var$2 = $nc(u)->getPort();
				var$1 = var$2 != $nc(this->url)->getPort();
			}
			var$0 = (var$1);
		}
		if (var$0) {
			bool var$3 = this->actualHost != nullptr;
			if (var$3) {
				bool var$4 = !$nc(this->actualHost)->equals($(u->getHost()));
				var$3 = (var$4 || this->actualPort != u->getPort());
			}
			if (var$3) {
				$throwNew($SecurityException, "image moved!"_s);
			}
			$set(this, actualHost, u->getHost());
			this->actualPort = u->getPort();
		}
	} catch ($IOException& e) {
		if (is != nullptr) {
			try {
				is->close();
			} catch ($IOException& e2) {
			}
		} else if ($instanceOf($HttpURLConnection, c)) {
			$nc(($cast($HttpURLConnection, c)))->disconnect();
		}
		return nullptr;
	}
	$var($ImageDecoder, id, decoderForType(is, type));
	if (id == nullptr) {
		$assign(id, getDecoder(is));
	}
	if (id == nullptr) {
		if (is != nullptr) {
			try {
				is->close();
			} catch ($IOException& e) {
			}
		} else if ($instanceOf($HttpURLConnection, c)) {
			$nc(($cast($HttpURLConnection, c)))->disconnect();
		}
	}
	return id;
}

URLImageSource::URLImageSource() {
}

$Class* URLImageSource::load$($String* name, bool initialize) {
	$loadClass(URLImageSource, name, initialize, &_URLImageSource_ClassInfo_, allocate$URLImageSource);
	return class$;
}

$Class* URLImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun