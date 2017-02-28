/**
 * @file feature_min_x_object.h
 * 
 * @brief
 * 
 * Class used to describe a feature of the object number
 */

#ifndef H2SL_FEATURE_OBJECT_MATCHES_SORTED_OBJECTS_H
#define H2SL_FEATURE_OBJECT_MATCHES_SORTED_OBJECTS_H

#include <iostream>
#include <libxml/tree.h>

#include "h2sl/feature.h"

namespace h2sl {
  /**
   * Feature_Object_Matches_Sorted_Objects class definition
   */
  class Feature_Object_Matches_Sorted_Objects : public Feature {
  public:
    Feature_Object_Matches_Sorted_Objects( const bool& invert = false );
    Feature_Object_Matches_Sorted_Objects( const Feature_Object_Matches_Sorted_Objects& other );
    virtual ~Feature_Object_Matches_Sorted_Objects();
    Feature_Object_Matches_Sorted_Objects& operator=( const Feature_Object_Matches_Sorted_Objects& other );

    virtual bool value( const unsigned int& cv, const h2sl::Grounding* grounding, const std::vector< std::pair< const h2sl::Phrase*, std::vector< Grounding* > > >& children, const Phrase* phrase, const World* world );
    virtual bool value( const unsigned int& cv, const h2sl::Grounding* grounding, const std::vector< std::pair< const h2sl::Phrase*, std::vector< Grounding* > > >& children, const Phrase* phrase, const World* world, const Grounding* context );

    virtual void from_xml( const std::string& file );
    virtual void from_xml( xmlNodePtr root );
    virtual void to_xml( const std::string& file )const;
    virtual void to_xml( xmlDocPtr doc, xmlNodePtr root )const;

    inline std::string& sorting_key( void ){ return get_prop< std::string >( _string_properties, "sorting_key" ); };
    inline const std::string& sorting_key( void )const{ return get_prop< std::string >( _string_properties, "sorting_key" ); };

    virtual inline const h2sl::feature_type_t type( void )const{ return h2sl::FEATURE_TYPE_GROUNDING; };

  protected:

  private:

  };

  /** 
   * Feature_Object_Matches_Sorted_Objects class ostream operator
   */
  std::ostream& operator<<( std::ostream& out, const Feature_Object_Matches_Sorted_Objects& other );
}

#endif /* H2SL_FEATURE_OBJECT_MATCHES_SORTED_OBJECTS_H */

