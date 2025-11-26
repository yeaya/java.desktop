#ifndef _javax_swing_plaf_nimbus_FileChooserPainter_h_
#define _javax_swing_plaf_nimbus_FileChooserPainter_h_
//$ class javax.swing.plaf.nimbus.FileChooserPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("COMPUTERICON_ENABLED")
#undef COMPUTERICON_ENABLED
#pragma push_macro("DETAILSVIEWICON_ENABLED")
#undef DETAILSVIEWICON_ENABLED
#pragma push_macro("DIRECTORYICON_ENABLED")
#undef DIRECTORYICON_ENABLED
#pragma push_macro("FILEICON_ENABLED")
#undef FILEICON_ENABLED
#pragma push_macro("FLOPPYDRIVEICON_ENABLED")
#undef FLOPPYDRIVEICON_ENABLED
#pragma push_macro("HARDDRIVEICON_ENABLED")
#undef HARDDRIVEICON_ENABLED
#pragma push_macro("HOMEFOLDERICON_ENABLED")
#undef HOMEFOLDERICON_ENABLED
#pragma push_macro("LISTVIEWICON_ENABLED")
#undef LISTVIEWICON_ENABLED
#pragma push_macro("NEWFOLDERICON_ENABLED")
#undef NEWFOLDERICON_ENABLED
#pragma push_macro("UPFOLDERICON_ENABLED")
#undef UPFOLDERICON_ENABLED

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class Paint;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Ellipse2D;
			class Path2D;
			class Rectangle2D;
			class RoundRectangle2D;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class FileChooserPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(FileChooserPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	FileChooserPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Ellipse2D* decodeEllipse1();
	::java::awt::geom::Ellipse2D* decodeEllipse2();
	::java::awt::geom::Ellipse2D* decodeEllipse3();
	::java::awt::geom::Ellipse2D* decodeEllipse4();
	::java::awt::geom::Ellipse2D* decodeEllipse5();
	::java::awt::geom::Ellipse2D* decodeEllipse6();
	::java::awt::geom::Ellipse2D* decodeEllipse7();
	::java::awt::geom::Ellipse2D* decodeEllipse8();
	::java::awt::geom::Ellipse2D* decodeEllipse9();
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient13(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient14(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient15(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient16(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient17(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient18(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient19(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient20(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient21(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient22(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient23(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient24(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient25(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient26(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient27(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient28(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient29(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient30(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient31(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient32(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient33(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient34(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient35(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath10();
	::java::awt::geom::Path2D* decodePath11();
	::java::awt::geom::Path2D* decodePath12();
	::java::awt::geom::Path2D* decodePath13();
	::java::awt::geom::Path2D* decodePath14();
	::java::awt::geom::Path2D* decodePath15();
	::java::awt::geom::Path2D* decodePath16();
	::java::awt::geom::Path2D* decodePath17();
	::java::awt::geom::Path2D* decodePath18();
	::java::awt::geom::Path2D* decodePath19();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Path2D* decodePath20();
	::java::awt::geom::Path2D* decodePath21();
	::java::awt::geom::Path2D* decodePath22();
	::java::awt::geom::Path2D* decodePath23();
	::java::awt::geom::Path2D* decodePath24();
	::java::awt::geom::Path2D* decodePath25();
	::java::awt::geom::Path2D* decodePath26();
	::java::awt::geom::Path2D* decodePath27();
	::java::awt::geom::Path2D* decodePath28();
	::java::awt::geom::Path2D* decodePath29();
	::java::awt::geom::Path2D* decodePath3();
	::java::awt::geom::Path2D* decodePath30();
	::java::awt::geom::Path2D* decodePath31();
	::java::awt::geom::Path2D* decodePath32();
	::java::awt::geom::Path2D* decodePath33();
	::java::awt::geom::Path2D* decodePath34();
	::java::awt::geom::Path2D* decodePath35();
	::java::awt::geom::Path2D* decodePath36();
	::java::awt::geom::Path2D* decodePath37();
	::java::awt::geom::Path2D* decodePath38();
	::java::awt::geom::Path2D* decodePath4();
	::java::awt::geom::Path2D* decodePath5();
	::java::awt::geom::Path2D* decodePath6();
	::java::awt::geom::Path2D* decodePath7();
	::java::awt::geom::Path2D* decodePath8();
	::java::awt::geom::Path2D* decodePath9();
	::java::awt::Paint* decodeRadial1(::java::awt::Shape* s);
	::java::awt::Paint* decodeRadial2(::java::awt::Shape* s);
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect10();
	::java::awt::geom::Rectangle2D* decodeRect11();
	::java::awt::geom::Rectangle2D* decodeRect12();
	::java::awt::geom::Rectangle2D* decodeRect13();
	::java::awt::geom::Rectangle2D* decodeRect14();
	::java::awt::geom::Rectangle2D* decodeRect15();
	::java::awt::geom::Rectangle2D* decodeRect16();
	::java::awt::geom::Rectangle2D* decodeRect17();
	::java::awt::geom::Rectangle2D* decodeRect18();
	::java::awt::geom::Rectangle2D* decodeRect19();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect20();
	::java::awt::geom::Rectangle2D* decodeRect21();
	::java::awt::geom::Rectangle2D* decodeRect22();
	::java::awt::geom::Rectangle2D* decodeRect23();
	::java::awt::geom::Rectangle2D* decodeRect24();
	::java::awt::geom::Rectangle2D* decodeRect25();
	::java::awt::geom::Rectangle2D* decodeRect26();
	::java::awt::geom::Rectangle2D* decodeRect27();
	::java::awt::geom::Rectangle2D* decodeRect28();
	::java::awt::geom::Rectangle2D* decodeRect29();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect30();
	::java::awt::geom::Rectangle2D* decodeRect31();
	::java::awt::geom::Rectangle2D* decodeRect32();
	::java::awt::geom::Rectangle2D* decodeRect33();
	::java::awt::geom::Rectangle2D* decodeRect34();
	::java::awt::geom::Rectangle2D* decodeRect35();
	::java::awt::geom::Rectangle2D* decodeRect36();
	::java::awt::geom::Rectangle2D* decodeRect37();
	::java::awt::geom::Rectangle2D* decodeRect38();
	::java::awt::geom::Rectangle2D* decodeRect39();
	::java::awt::geom::Rectangle2D* decodeRect4();
	::java::awt::geom::Rectangle2D* decodeRect40();
	::java::awt::geom::Rectangle2D* decodeRect41();
	::java::awt::geom::Rectangle2D* decodeRect42();
	::java::awt::geom::Rectangle2D* decodeRect43();
	::java::awt::geom::Rectangle2D* decodeRect44();
	::java::awt::geom::Rectangle2D* decodeRect45();
	::java::awt::geom::Rectangle2D* decodeRect46();
	::java::awt::geom::Rectangle2D* decodeRect47();
	::java::awt::geom::Rectangle2D* decodeRect48();
	::java::awt::geom::Rectangle2D* decodeRect49();
	::java::awt::geom::Rectangle2D* decodeRect5();
	::java::awt::geom::Rectangle2D* decodeRect50();
	::java::awt::geom::Rectangle2D* decodeRect51();
	::java::awt::geom::Rectangle2D* decodeRect52();
	::java::awt::geom::Rectangle2D* decodeRect6();
	::java::awt::geom::Rectangle2D* decodeRect7();
	::java::awt::geom::Rectangle2D* decodeRect8();
	::java::awt::geom::Rectangle2D* decodeRect9();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintdetailsViewIconEnabled(::java::awt::Graphics2D* g);
	void paintdirectoryIconEnabled(::java::awt::Graphics2D* g);
	void paintfileIconEnabled(::java::awt::Graphics2D* g);
	void paintfloppyDriveIconEnabled(::java::awt::Graphics2D* g);
	void painthardDriveIconEnabled(::java::awt::Graphics2D* g);
	void painthomeFolderIconEnabled(::java::awt::Graphics2D* g);
	void paintlistViewIconEnabled(::java::awt::Graphics2D* g);
	void paintnewFolderIconEnabled(::java::awt::Graphics2D* g);
	void paintupFolderIconEnabled(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t FILEICON_ENABLED = 2;
	static const int32_t DIRECTORYICON_ENABLED = 3;
	static const int32_t UPFOLDERICON_ENABLED = 4;
	static const int32_t NEWFOLDERICON_ENABLED = 5;
	static const int32_t COMPUTERICON_ENABLED = 6;
	static const int32_t HARDDRIVEICON_ENABLED = 7;
	static const int32_t FLOPPYDRIVEICON_ENABLED = 8;
	static const int32_t HOMEFOLDERICON_ENABLED = 9;
	static const int32_t DETAILSVIEWICON_ENABLED = 10;
	static const int32_t LISTVIEWICON_ENABLED = 11;
	int32_t state = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	::java::awt::geom::Path2D* path = nullptr;
	::java::awt::geom::Rectangle2D* rect = nullptr;
	::java::awt::geom::RoundRectangle2D* roundRect = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	::java::awt::Color* color1 = nullptr;
	::java::awt::Color* color2 = nullptr;
	::java::awt::Color* color3 = nullptr;
	::java::awt::Color* color4 = nullptr;
	::java::awt::Color* color5 = nullptr;
	::java::awt::Color* color6 = nullptr;
	::java::awt::Color* color7 = nullptr;
	::java::awt::Color* color8 = nullptr;
	::java::awt::Color* color9 = nullptr;
	::java::awt::Color* color10 = nullptr;
	::java::awt::Color* color11 = nullptr;
	::java::awt::Color* color12 = nullptr;
	::java::awt::Color* color13 = nullptr;
	::java::awt::Color* color14 = nullptr;
	::java::awt::Color* color15 = nullptr;
	::java::awt::Color* color16 = nullptr;
	::java::awt::Color* color17 = nullptr;
	::java::awt::Color* color18 = nullptr;
	::java::awt::Color* color19 = nullptr;
	::java::awt::Color* color20 = nullptr;
	::java::awt::Color* color21 = nullptr;
	::java::awt::Color* color22 = nullptr;
	::java::awt::Color* color23 = nullptr;
	::java::awt::Color* color24 = nullptr;
	::java::awt::Color* color25 = nullptr;
	::java::awt::Color* color26 = nullptr;
	::java::awt::Color* color27 = nullptr;
	::java::awt::Color* color28 = nullptr;
	::java::awt::Color* color29 = nullptr;
	::java::awt::Color* color30 = nullptr;
	::java::awt::Color* color31 = nullptr;
	::java::awt::Color* color32 = nullptr;
	::java::awt::Color* color33 = nullptr;
	::java::awt::Color* color34 = nullptr;
	::java::awt::Color* color35 = nullptr;
	::java::awt::Color* color36 = nullptr;
	::java::awt::Color* color37 = nullptr;
	::java::awt::Color* color38 = nullptr;
	::java::awt::Color* color39 = nullptr;
	::java::awt::Color* color40 = nullptr;
	::java::awt::Color* color41 = nullptr;
	::java::awt::Color* color42 = nullptr;
	::java::awt::Color* color43 = nullptr;
	::java::awt::Color* color44 = nullptr;
	::java::awt::Color* color45 = nullptr;
	::java::awt::Color* color46 = nullptr;
	::java::awt::Color* color47 = nullptr;
	::java::awt::Color* color48 = nullptr;
	::java::awt::Color* color49 = nullptr;
	::java::awt::Color* color50 = nullptr;
	::java::awt::Color* color51 = nullptr;
	::java::awt::Color* color52 = nullptr;
	::java::awt::Color* color53 = nullptr;
	::java::awt::Color* color54 = nullptr;
	::java::awt::Color* color55 = nullptr;
	::java::awt::Color* color56 = nullptr;
	::java::awt::Color* color57 = nullptr;
	::java::awt::Color* color58 = nullptr;
	::java::awt::Color* color59 = nullptr;
	::java::awt::Color* color60 = nullptr;
	::java::awt::Color* color61 = nullptr;
	::java::awt::Color* color62 = nullptr;
	::java::awt::Color* color63 = nullptr;
	::java::awt::Color* color64 = nullptr;
	::java::awt::Color* color65 = nullptr;
	::java::awt::Color* color66 = nullptr;
	::java::awt::Color* color67 = nullptr;
	::java::awt::Color* color68 = nullptr;
	::java::awt::Color* color69 = nullptr;
	::java::awt::Color* color70 = nullptr;
	::java::awt::Color* color71 = nullptr;
	::java::awt::Color* color72 = nullptr;
	::java::awt::Color* color73 = nullptr;
	::java::awt::Color* color74 = nullptr;
	::java::awt::Color* color75 = nullptr;
	::java::awt::Color* color76 = nullptr;
	::java::awt::Color* color77 = nullptr;
	::java::awt::Color* color78 = nullptr;
	::java::awt::Color* color79 = nullptr;
	::java::awt::Color* color80 = nullptr;
	::java::awt::Color* color81 = nullptr;
	::java::awt::Color* color82 = nullptr;
	::java::awt::Color* color83 = nullptr;
	::java::awt::Color* color84 = nullptr;
	::java::awt::Color* color85 = nullptr;
	::java::awt::Color* color86 = nullptr;
	::java::awt::Color* color87 = nullptr;
	::java::awt::Color* color88 = nullptr;
	::java::awt::Color* color89 = nullptr;
	::java::awt::Color* color90 = nullptr;
	::java::awt::Color* color91 = nullptr;
	::java::awt::Color* color92 = nullptr;
	::java::awt::Color* color93 = nullptr;
	::java::awt::Color* color94 = nullptr;
	::java::awt::Color* color95 = nullptr;
	::java::awt::Color* color96 = nullptr;
	::java::awt::Color* color97 = nullptr;
	::java::awt::Color* color98 = nullptr;
	::java::awt::Color* color99 = nullptr;
	::java::awt::Color* color100 = nullptr;
	::java::awt::Color* color101 = nullptr;
	::java::awt::Color* color102 = nullptr;
	::java::awt::Color* color103 = nullptr;
	::java::awt::Color* color104 = nullptr;
	::java::awt::Color* color105 = nullptr;
	::java::awt::Color* color106 = nullptr;
	::java::awt::Color* color107 = nullptr;
	::java::awt::Color* color108 = nullptr;
	::java::awt::Color* color109 = nullptr;
	::java::awt::Color* color110 = nullptr;
	::java::awt::Color* color111 = nullptr;
	::java::awt::Color* color112 = nullptr;
	::java::awt::Color* color113 = nullptr;
	::java::awt::Color* color114 = nullptr;
	::java::awt::Color* color115 = nullptr;
	::java::awt::Color* color116 = nullptr;
	::java::awt::Color* color117 = nullptr;
	::java::awt::Color* color118 = nullptr;
	::java::awt::Color* color119 = nullptr;
	::java::awt::Color* color120 = nullptr;
	::java::awt::Color* color121 = nullptr;
	::java::awt::Color* color122 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("COMPUTERICON_ENABLED")
#pragma pop_macro("DETAILSVIEWICON_ENABLED")
#pragma pop_macro("DIRECTORYICON_ENABLED")
#pragma pop_macro("FILEICON_ENABLED")
#pragma pop_macro("FLOPPYDRIVEICON_ENABLED")
#pragma pop_macro("HARDDRIVEICON_ENABLED")
#pragma pop_macro("HOMEFOLDERICON_ENABLED")
#pragma pop_macro("LISTVIEWICON_ENABLED")
#pragma pop_macro("NEWFOLDERICON_ENABLED")
#pragma pop_macro("UPFOLDERICON_ENABLED")

#endif // _javax_swing_plaf_nimbus_FileChooserPainter_h_