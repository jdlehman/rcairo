/* -*- c-file-style: "gnu"; indent-tabs-mode: nil -*- */
/*
 * Ruby Cairo Binding
 *
 * $Author: kou $
 * $Date: 2005-10-10 15:40:26 $
 *
 * Copyright 2005 Øyvind Kolås <pippin@freedesktop.org>
 * Copyright 2004-2005 MenTaLguY <mental@rydia.com>
 *
 * This file is made available under the same terms as Ruby
 *
*/


#include "rb_cairo.h"

void
Init_cairo_constants (void)
{
  /* cairo_operator_t */
  rb_define_const (rb_mCairo,    "OPERATOR_CLEAR",
                   INT2FIX (CAIRO_OPERATOR_CLEAR));

  rb_define_const (rb_mCairo,    "OPERATOR_SOURCE",
                   INT2FIX (CAIRO_OPERATOR_SOURCE));
  rb_define_const (rb_mCairo,    "OPERATOR_OVER",
                   INT2FIX (CAIRO_OPERATOR_OVER));
  rb_define_const (rb_mCairo,    "OPERATOR_IN",
                   INT2FIX (CAIRO_OPERATOR_IN));
  rb_define_const (rb_mCairo,    "OPERATOR_OUT",
                   INT2FIX (CAIRO_OPERATOR_OUT));
  rb_define_const (rb_mCairo,    "OPERATOR_ATOP",
                   INT2FIX (CAIRO_OPERATOR_ATOP));
  
  rb_define_const (rb_mCairo,    "OPERATOR_DEST",
                   INT2FIX (CAIRO_OPERATOR_DEST));
  rb_define_const (rb_mCairo,    "OPERATOR_DEST_OVER",
                   INT2FIX (CAIRO_OPERATOR_DEST_OVER));
  rb_define_const (rb_mCairo,    "OPERATOR_DEST_IN",
                   INT2FIX (CAIRO_OPERATOR_DEST_IN));
  rb_define_const (rb_mCairo,    "OPERATOR_DEST_OUT",
                   INT2FIX (CAIRO_OPERATOR_DEST_OUT));
  rb_define_const (rb_mCairo,    "OPERATOR_DEST_ATOP",
                   INT2FIX (CAIRO_OPERATOR_DEST_ATOP));

  rb_define_const (rb_mCairo,    "OPERATOR_XOR",
                   INT2FIX (CAIRO_OPERATOR_XOR));
  rb_define_const (rb_mCairo,    "OPERATOR_ADD",
                   INT2FIX (CAIRO_OPERATOR_ADD));
  rb_define_const (rb_mCairo,    "OPERATOR_SATURATE",
                   INT2FIX (CAIRO_OPERATOR_SATURATE));

  
  /* cairo_antialias_t */
  rb_define_const (rb_mCairo,    "ANTIALIAS_DEFAULT",
                   INT2FIX (CAIRO_ANTIALIAS_DEFAULT));
  rb_define_const (rb_mCairo,    "ANTIALIAS_NONO",
                   INT2FIX (CAIRO_ANTIALIAS_NONE));
  rb_define_const (rb_mCairo,    "ANTIALIAS_GRAY",
                   INT2FIX (CAIRO_ANTIALIAS_GRAY));
  rb_define_const (rb_mCairo,    "ANTIALIAS_SUBPIXEL",
                   INT2FIX (CAIRO_ANTIALIAS_SUBPIXEL));


  /* cairo_fill_rule_t */
  rb_define_const (rb_mCairo,    "FILL_RULE_WINDING",
                   INT2FIX (CAIRO_FILL_RULE_WINDING));
  rb_define_const (rb_mCairo,    "FILL_RULE_EVEN_ODD",
                   INT2FIX (CAIRO_FILL_RULE_EVEN_ODD));

                   
  /* cairo_line_cap_t */
  rb_define_const (rb_mCairo,    "LINE_CAP_BUTT",
                   INT2FIX (CAIRO_LINE_CAP_BUTT));
  rb_define_const (rb_mCairo,    "LINE_CAP_ROUND",
                   INT2FIX (CAIRO_LINE_CAP_ROUND));
  rb_define_const (rb_mCairo,    "LINE_CAP_SQUARE",
                   INT2FIX (CAIRO_LINE_CAP_SQUARE));


  /* cairo_line_join_t */
  rb_define_const (rb_mCairo,    "LINE_JOIN_MITER",
                   INT2FIX (CAIRO_LINE_JOIN_MITER));
  rb_define_const (rb_mCairo,    "LINE_JOIN_ROUND",
                   INT2FIX (CAIRO_LINE_JOIN_ROUND));
  rb_define_const (rb_mCairo,    "LINE_JOIN_BEVEL",
                   INT2FIX (CAIRO_LINE_JOIN_BEVEL));


  /* cairo_slant_t */
  rb_define_const (rb_mCairo,    "FONT_SLANT_NORMAL",
                   INT2FIX (CAIRO_FONT_SLANT_NORMAL));
  rb_define_const (rb_mCairo,    "FONT_SLANT_ITALIC",
                   INT2FIX (CAIRO_FONT_SLANT_ITALIC));
  rb_define_const (rb_mCairo,    "FONT_SLANT_OBLIQUE",
                   INT2FIX (CAIRO_FONT_SLANT_OBLIQUE));


  /* cairo_weight_t */
  rb_define_const (rb_mCairo,    "FONT_WEIGHT_NORMAL",
                   INT2FIX (CAIRO_FONT_WEIGHT_NORMAL));
  rb_define_const (rb_mCairo,    "FONT_WEIGHT_BOLD",
                   INT2FIX (CAIRO_FONT_WEIGHT_BOLD));
  

  /* cairo_subpixel_order_t */
  rb_define_const (rb_mCairo,    "SUBPIXEL_ORDER_DEFAULT",
                   INT2FIX (CAIRO_SUBPIXEL_ORDER_DEFAULT));
  rb_define_const (rb_mCairo,    "SUBPIXEL_ORDER_RGB",
                   INT2FIX (CAIRO_SUBPIXEL_ORDER_RGB));
  rb_define_const (rb_mCairo,    "SUBPIXEL_ORDER_BGR",
                   INT2FIX (CAIRO_SUBPIXEL_ORDER_BGR));
  rb_define_const (rb_mCairo,    "SUBPIXEL_ORDER_VRGB",
                   INT2FIX (CAIRO_SUBPIXEL_ORDER_VRGB));
  rb_define_const (rb_mCairo,    "SUBPIXEL_ORDER_VBGR",
                   INT2FIX (CAIRO_SUBPIXEL_ORDER_VBGR));
  

  /* cairo_hint_style_t */
  rb_define_const (rb_mCairo,    "HINT_STYLE_DEFAULT",
                   INT2FIX (CAIRO_HINT_STYLE_DEFAULT));
  rb_define_const (rb_mCairo,    "HINT_STYLE_NONE",
                   INT2FIX (CAIRO_HINT_STYLE_NONE));
  rb_define_const (rb_mCairo,    "HINT_STYLE_SLIGHT",
                   INT2FIX (CAIRO_HINT_STYLE_SLIGHT));
  rb_define_const (rb_mCairo,    "HINT_STYLE_MEDIUM",
                   INT2FIX (CAIRO_HINT_STYLE_MEDIUM));
  rb_define_const (rb_mCairo,    "HINT_STYLE_FULL",
                   INT2FIX (CAIRO_HINT_STYLE_FULL));


  /* cairo_hint_metrics_t */
  rb_define_const (rb_mCairo,    "HINT_METRICS_DEFAULT",
                   INT2FIX (CAIRO_HINT_METRICS_DEFAULT));
  rb_define_const (rb_mCairo,    "HINT_METRICS_ON",
                   INT2FIX (CAIRO_HINT_METRICS_ON));
  rb_define_const (rb_mCairo,    "HINT_METRICS_OFF",
                   INT2FIX (CAIRO_HINT_METRICS_OFF));


  /* cairo_path_data_type_t */
  rb_define_const (rb_mCairo,    "PATH_MOVE_TO",
                   INT2FIX (CAIRO_PATH_MOVE_TO));
  rb_define_const (rb_mCairo,    "PATH_LINE_TO",
                   INT2FIX (CAIRO_PATH_LINE_TO));
  rb_define_const (rb_mCairo,    "PATH_CURVE_TO",
                   INT2FIX (CAIRO_PATH_CURVE_TO));
  rb_define_const (rb_mCairo,    "PATH_CLOSE_PATH",
                   INT2FIX (CAIRO_PATH_CLOSE_PATH));


  /* cairo_content_t */
  rb_define_const (rb_mCairo,    "CONTENT_COLOR",
                   INT2FIX (CAIRO_CONTENT_COLOR));
  rb_define_const (rb_mCairo,    "CONTENT_ALPHA",
                   INT2FIX (CAIRO_CONTENT_ALPHA));
  rb_define_const (rb_mCairo,    "CONTENT_COLOR_ALPHA",
                   INT2FIX (CAIRO_CONTENT_COLOR_ALPHA));


  /* cairo_format_t */
  rb_define_const (rb_mCairo,    "FORMAT_ARGB32",
                   INT2FIX (CAIRO_FORMAT_ARGB32));
  rb_define_const (rb_mCairo,    "FORMAT_RGB24",
                   INT2FIX (CAIRO_FORMAT_RGB24));
  rb_define_const (rb_mCairo,    "FORMAT_A8",
                   INT2FIX (CAIRO_FORMAT_A8));
  rb_define_const (rb_mCairo,    "FORMAT_A1",
                   INT2FIX (CAIRO_FORMAT_A1));


  /* cairo_extend_t */
  rb_define_const (rb_mCairo,    "EXTEND_NONE",
                   INT2FIX (CAIRO_EXTEND_NONE));
  rb_define_const (rb_mCairo,    "EXTEND_REPEAT",
                   INT2FIX (CAIRO_EXTEND_REPEAT));
  rb_define_const (rb_mCairo,    "EXTEND_REFLECT",
                   INT2FIX (CAIRO_EXTEND_REFLECT));

  
  /* cairo_filter_t */
  rb_define_const (rb_mCairo,    "FILTER_FAST",
                   INT2FIX (CAIRO_FILTER_FAST));
  rb_define_const (rb_mCairo,    "FILTER_GOOD",
                   INT2FIX (CAIRO_FILTER_GOOD));
  rb_define_const (rb_mCairo,    "FILTER_BEST",
                   INT2FIX (CAIRO_FILTER_BEST));
  rb_define_const (rb_mCairo,    "FILTER_NEAREST",
                   INT2FIX (CAIRO_FILTER_NEAREST));
  rb_define_const (rb_mCairo,    "FILTER_BILINEAR",
                   INT2FIX (CAIRO_FILTER_BILINEAR));
  rb_define_const (rb_mCairo,    "FILTER_GAUSSIAN",
                   INT2FIX (CAIRO_FILTER_GAUSSIAN));
}
