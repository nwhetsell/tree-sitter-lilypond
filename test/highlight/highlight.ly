\version "2.24.0"
% <- processing
%        ^ string.delimiter.left
%         ^ string
%               ^ string.delimiter.right

\language english
% <- identifier.core.function
%         ^ identifier.core.constant.language

# (define foo '())
% <- processing
% ^ bracket
%  ^ keyword
%             ^ operator
%              ^ bracket
%               ^ bracket
%                ^ bracket

# (define-markup-command (bar layout properties input-markup) (markup?)
; <- processing
; ^ bracket
;  ^ identifier.core.function
;                        ^ bracket
;                                                           ^ bracket
;                                                             ^ bracket
;                                                              ^ identifier.core.function
;                                                                     ^ bracket

  ( interpret-markup layout properties #{ \markup #input-markup #}))
  % <- bracket
  % ^ identifier.core.function
  %                                    ^ bracket
  %                                       ^ keyword
  %                                               ^ processing
  %                                                             ^ bracket
  %                                                               ^ bracket
  %                                                                ^ bracket

\score {
% <- keyword
%      ^ bracket

  \new Staff="foo" {
  % <- keyword
  %    ^ identifier.core.type.context
  %         ^ operator
  %          ^ string.delimiter.left
  %           ^ string
  %              ^ string.delimiter.right
  %                ^ bracket

    < \breve >>> q1*3/2\^
    % <- bracket
    % ^ value.number
    %        ^ invalid
    %          ^ bracket
    %            ^ keyword
    %             ^ value.number
    %              ^ punctuation
    %               ^ value.number
    %                ^ value.number
    %                 ^ value.number
    %                  ^ identifier.core.function

    << { 1 \< } \\ { 2 \! } >>
    % <- bracket
    %  ^ bracket
    %    ^ value.number
    %      ^ identifier.core.global
    %         ^ bracket
    %           ^ bracket
    %              ^ bracket
    %                ^ value.number
    %                  ^ identifier.core.global
    %                     ^ bracket
    %                       ^ bracket

    # (define bar #{
    % <- processing
    % ^ bracket
    %  ^ keyword
    %             ^ bracket
    %              ^ bracket
      \relative {
      % <- identifier.core.function
      %         ^ bracket
        # (make-sequential-music
        ; <- processing
        ; ^ bracket
        ;  ^ identifier.core.function
          ( map (lambda (baz) #{ s1 #})
          ; <- bracket
          ; ^ identifier.core.function
          ;     ^ bracket
          ;      ^ keyword
          ;             ^ bracket
          ;                 ^ bracket
          ;                   ^ bracket
          ;                    ^ bracket
          ;                       ^ value.number
          ;                         ^ bracket
          ;                          ^ bracket
          ;                           ^ bracket
               ( iota 1)))
               % <- bracket
               % ^ identifier.core.function
               %      ^ value.number
               %       ^ bracket
               %        ^ bracket
               %         ^ bracket

      }
      % <- bracket
    #})
    % <- bracket
    %^ bracket
    % ^ bracket

    \tweak when ##f
    % <- identifier.core.function
    %      ^ identifier.core.property.graphical_object
    %           ^ processing
    %            ^ value.boolean

    \override NoteHead.labels = ""
    % <- keyword
    %         ^ identifier.core.type.graphical_object
    %                 ^ punctuation
    %                  ^ identifier.core.property.graphical_object
    %                         ^ operator
    %                           ^ string.delimiter.left
    %                            ^ string.delimiter.right
  }
  % <- bracket
}
% <- bracket

\lyrics {
% <- keyword
%       ^ bracket
  flag labels when used
  % <- !
  %    ^ !
  %           ^ !
  %                ^ !
  % The assertion ! succeeds when no highlighting is applied.
}
% <- bracket
