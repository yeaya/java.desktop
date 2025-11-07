#include <sun/awt/image/FetcherInfo.h>

#include <java/lang/StringBuffer.h>
#include <java/util/Vector.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FETCHER_INFO_KEY
#undef MAX_NUM_FETCHERS_PER_APPCONTEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Vector = ::java::util::Vector;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _FetcherInfo_FieldInfo_[] = {
	{"MAX_NUM_FETCHERS_PER_APPCONTEXT", "I", nullptr, $STATIC | $FINAL, $constField(FetcherInfo, MAX_NUM_FETCHERS_PER_APPCONTEXT)},
	{"fetchers", "[Ljava/lang/Thread;", nullptr, 0, $field(FetcherInfo, fetchers)},
	{"numFetchers", "I", nullptr, 0, $field(FetcherInfo, numFetchers)},
	{"numWaiting", "I", nullptr, 0, $field(FetcherInfo, numWaiting)},
	{"waitList", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/image/ImageFetchable;>;", 0, $field(FetcherInfo, waitList)},
	{"FETCHER_INFO_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FetcherInfo, FETCHER_INFO_KEY)},
	{}
};

$MethodInfo _FetcherInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FetcherInfo::*)()>(&FetcherInfo::init$))},
	{"getFetcherInfo", "()Lsun/awt/image/FetcherInfo;", nullptr, $STATIC, $method(static_cast<FetcherInfo*(*)()>(&FetcherInfo::getFetcherInfo))},
	{}
};

$ClassInfo _FetcherInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.FetcherInfo",
	"java.lang.Object",
	nullptr,
	_FetcherInfo_FieldInfo_,
	_FetcherInfo_MethodInfo_
};

$Object* allocate$FetcherInfo($Class* clazz) {
	return $of($alloc(FetcherInfo));
}

$Object* FetcherInfo::FETCHER_INFO_KEY = nullptr;

void FetcherInfo::init$() {
	$set(this, fetchers, $new($ThreadArray, FetcherInfo::MAX_NUM_FETCHERS_PER_APPCONTEXT));
	this->numFetchers = 0;
	this->numWaiting = 0;
	$set(this, waitList, $new($Vector));
}

FetcherInfo* FetcherInfo::getFetcherInfo() {
	$init(FetcherInfo);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$synchronized(appContext) {
		$var(FetcherInfo, info, $cast(FetcherInfo, $nc(appContext)->get(FetcherInfo::FETCHER_INFO_KEY)));
		if (info == nullptr) {
			$assign(info, $new(FetcherInfo));
			appContext->put(FetcherInfo::FETCHER_INFO_KEY, info);
		}
		return info;
	}
}

void clinit$FetcherInfo($Class* class$) {
	$assignStatic(FetcherInfo::FETCHER_INFO_KEY, $new($StringBuffer, "FetcherInfo"_s));
}

FetcherInfo::FetcherInfo() {
}

$Class* FetcherInfo::load$($String* name, bool initialize) {
	$loadClass(FetcherInfo, name, initialize, &_FetcherInfo_ClassInfo_, clinit$FetcherInfo, allocate$FetcherInfo);
	return class$;
}

$Class* FetcherInfo::class$ = nullptr;

		} // image
	} // awt
} // sun