/* Generated by RuntimeBrowser.
 */

@protocol PRSiTunesResult <PRSBaseResult, PRSCardResult>

@required

- (NSString *)section_header;
- (void)setSection_header:(NSString *)arg1;
- (void)setTemplateName:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)templateName;
- (NSString *)title;

@optional

- (NSString *)card_title;
- (BOOL)description_nowrap;
- (PRSImage *)icon;
- (NSArray *)more_glyphs;
- (float)rating;
- (NSString *)rating_text;
- (NSString *)resultDescription;
- (PRSImage *)rt_glyph;
- (BOOL)rt_newline;
- (NSString *)rt_text;
- (void)setCard_title:(NSString *)arg1;
- (void)setDescription_nowrap:(BOOL)arg1;
- (void)setIcon:(PRSImage *)arg1;
- (void)setMore_glyphs:(NSArray *)arg1;
- (void)setRating:(float)arg1;
- (void)setRating_text:(NSString *)arg1;
- (void)setResultDescription:(NSString *)arg1;
- (void)setRt_glyph:(PRSImage *)arg1;
- (void)setRt_newline:(BOOL)arg1;
- (void)setRt_text:(NSString *)arg1;
- (void)setString_format:(NSString *)arg1;
- (NSString *)string_format;

@end