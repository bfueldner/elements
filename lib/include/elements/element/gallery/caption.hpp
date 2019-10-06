/*=============================================================================
   Copyright (c) 2016-2019 Joel de Guzman

   Distributed under the MIT License [ https://opensource.org/licenses/MIT ]
=============================================================================*/
#if !defined(ELEMENTS_GALLERY_CAPION_JUNE_5_2016)
#define ELEMENTS_GALLERY_CAPION_JUNE_5_2016

#include <elements/element/tile.hpp>
#include <elements/element/align.hpp>
#include <elements/element/misc.hpp>
#include <elements/element/margin.hpp>

namespace cycfi { namespace elements
{
   ////////////////////////////////////////////////////////////////////////////
   // Caption
   ////////////////////////////////////////////////////////////////////////////
   template <typename Content>
   inline auto caption(Content&& content, std::string const& title, float size = 1.0)
   {
      return
         vtile(
            std::forward<Content>(content),
            align_center(top_margin(5.0, label(title, size)))
         );
   }

   template <typename Content>
   inline auto left_caption(Content&& content, std::string const& title, float size = 1.0)
   {
      return
         htile(
            align_middle(right_margin(10.0, label(title, size))),
            std::forward<Content>(content)
         );
   }
}}

#endif
