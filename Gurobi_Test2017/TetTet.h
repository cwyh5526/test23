//// Copyright (C) 2014 Anders Logg and August Johansson
////
//// This file is part of DOLFIN.
////
//// DOLFIN is free software: you can redistribute it and/or modify
//// it under the terms of the GNU Lesser General Public License as published by
//// the Free Software Foundation, either version 3 of the License, or
//// (at your option) any later version.
////
//// DOLFIN is distributed in the hope that it will be useful,
//// but WITHOUT ANY WARRANTY; without even the implied warranty of
//// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//// GNU Lesser General Public License for more details.
////
//// You should have received a copy of the GNU Lesser General Public License
//// along with DOLFIN. If not, see <http://www.gnu.org/licenses/>.
////
//// First added:  2014-02-03
//// Last changed: 2014-04-03
//
//#include <vector>
//#include"DataStructure.h"
////#include <dolfin/log/log.h>
//
//#ifndef __COLLISION_DETECTION_H
//#define __COLLISION_DETECTION_H
//
//namespace dolfin
//{
//
//	// Forward declarations
//	class MeshEntity;
//
//	/// This class implements algorithms for detecting pairwise
//	/// collisions between mesh entities of varying dimensions.
//
//	class CollisionDetection
//	{
//	public:
//
//		/// Check whether entity collides with point.
//		///
//		/// @param    entity (_MeshEntity_)
//		///         The entity.
//		/// @param    point (_vec3_)
//		///         The point.
//		///
//		/// @return    bool
//		///         True iff entity collides with cell.
//		static bool collides(const MeshEntity& entity,
//			const vec3& point);
//
//		/// Check whether two entities collide.
//		///
//		/// @param    entity_0 (_MeshEntity_)
//		///         The first entity.
//		/// @param    entity_1 (_MeshEntity_)
//		///         The second entity.
//		///
//		/// @return    bool
//		///         True iff entity collides with cell.
//		static bool collides(const MeshEntity& entity_0,
//			const MeshEntity& entity_1);
//
//		/// Check whether interval collides with point.
//		///
//		/// @param    interval (MeshEntity)
//		///         The interval.
//		/// @param    point (vec3)
//		///         The point.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_interval_point(const MeshEntity& interval,
//			const vec3& point);
//
//		/// Check whether interval collides with interval.
//		///
//		/// @param    interval_0 (MeshEntity)
//		///         The first interval.
//		/// @param    interval_1 (MeshEntity)
//		///         The second interval.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_interval_interval(const MeshEntity& interval_0,
//			const MeshEntity& interval_1);
//
//		/// Check whether triangle collides with point.
//		///
//		/// @param    triangle (MeshEntity)
//		///         The triangle.
//		/// @param    point (vec3)
//		///         The point.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_triangle_point(const MeshEntity& triangle,
//			const vec3& point);
//
//		/// Check whether triangle collides with triangle.
//		///
//		/// @param    triangle_0 (_MeshEntity_)
//		///         The first triangle.
//		/// @param    triangle_1 (_MeshEntity_)
//		///         The second triangle.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_triangle_triangle(const MeshEntity& triangle_0,
//			const MeshEntity& triangle_1);
//
//		/// Check whether tetrahedron collides with point.
//		///
//		/// @param   tetrahedron (MeshEntity)
//		///         The tetrahedron.
//		/// @param   point (vec3)
//		///         The point.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_tetrahedron_point(const MeshEntity& tetrahedron,
//			const vec3& point);
//
//		/// Check whether tetrahedron collides with triangle.
//		///
//		/// @param    tetrahedron (_MeshEntity_)
//		///         The tetrahedron.
//		/// @param    triangle (_MeshEntity_)
//		///         The triangle.
//		///
//		/// @return    bool
//		///         True iff objects collide.
//		static bool collides_tetrahedron_triangle(const MeshEntity& tetrahedron,
//			const MeshEntity& triangle);
//
//		/// Check whether tetrahedron collides with tetrahedron.
//		///
//		/// @param    tetrahedron_0 (_MeshEntity_)
//		///         The first tetrahedron.
//		/// @param    tetrahedron_1 (_MeshEntity_)
//		///         The second tetrahedron.
//		///
//		/// @return   bool
//		///         True iff objects collide.
//		static bool collides_tetrahedron_tetrahedron(const MeshEntity& tetrahedron_0,
//			const MeshEntity& tetrahedron_1);
//
//		/// Check whether edge a-b collides with edge c-d.
//		static bool collides_edge_edge(const vec3& a, const vec3& b,
//			const vec3& c, const vec3& d);
//
//
//		/// The implementation of collides_interval_point
//		static bool collides_interval_point(const vec3& p0, const vec3& p1,
//			const vec3& point);
//
//		/// The implementation of collides_triangle_point
//		static bool collides_triangle_point(const vec3& p0,
//			const vec3& p1,
//			const vec3& p2,
//			const vec3& point);
//
//		/// Specialised implementation of collides_triangle_point in 2D
//		static bool collides_triangle_point_2d(const vec3& p0,
//			const vec3& p1,
//			const vec3& p2,
//			const vec3& point);
//
//		/// The implementation of collides_tetrahedron_point
//		static bool collides_tetrahedron_point(const vec3& p0,
//			const vec3& p1,
//			const vec3& p2,
//			const vec3& p3,
//			const vec3& point);
//	private:
//
//		// The implementation of collides_triangle_triangle
//		static bool collides_triangle_triangle(const vec3& p0,
//			const vec3& p1,
//			const vec3& p2,
//			const vec3& q0,
//			const vec3& q1,
//			const vec3& q2);
//
//
//		// The implementation of collides_tetrahedron_triangle
//		static bool collides_tetrahedron_triangle(const vec3& p0,
//			const vec3& p1,
//			const vec3& p2,
//			const vec3& p3,
//			const vec3& q0,
//			const vec3& q1,
//			const vec3& q2);
//
//		// Helper function for triangle-triangle collision
//		static bool edge_edge_test(int i0,
//			int i1,
//			double Ax,
//			double Ay,
//			const vec3& V0,
//			const vec3& U0,
//			const vec3& U1);
//
//		// Helper function for triangle-triangle collision
//		static bool edge_against_tri_edges(int i0,
//			int i1,
//			const vec3& V0,
//			const vec3& V1,
//			const vec3& U0,
//			const vec3& U1,
//			const vec3& U2);
//
//		// Helper function for triangle-triangle collision
//		static bool point_in_tri(int i0,
//			int i1,
//			const vec3& V0,
//			const vec3& U0,
//			const vec3& U1,
//			const vec3& U2);
//
//		// Helper function for triangle-triangle collision
//		static bool coplanar_tri_tri(const vec3& N,
//			const vec3& V0,
//			const vec3& V1,
//			const vec3& V2,
//			const vec3& U0,
//			const vec3& U1,
//			const vec3& U2);
//
//		// Helper function for triangle-triangle collision
//		static bool compute_intervals(double VV0,
//			double VV1,
//			double VV2,
//			double D0,
//			double D1,
//			double D2,
//			double D0D1,
//			double D0D2,
//			double& A,
//			double& B,
//			double& C,
//			double& X0,
//			double& X1);
//
//		// Helper function for collides_tetrahedron_tetrahedron: checks if
//		// plane pv1 is a separating plane. Stores local coordinates bc
//		// and the mask bit mask_edges.
//		static bool separating_plane_face_A_1(const std::vector<vec3>& pv1,
//			const vec3& n,
//			std::vector<double>& bc,
//			int& mask_edges);
//
//		// Helper function for collides_tetrahedron_tetrahedron: checks if
//		// plane v1, v2 is a separating plane. Stores local coordinates bc
//		// and the mask bit mask_edges.
//		static bool separating_plane_face_A_2(const std::vector<vec3>& v1,
//			const std::vector<vec3>& v2,
//			const vec3& n,
//			std::vector<double>& bc,
//			int& mask_edges);
//
//		// Helper function for collides_tetrahedron_tetrahedron: checks if
//		// plane pv2 is a separating plane.
//		static bool separating_plane_face_B_1(const std::vector<vec3>& P_V2,
//			const vec3& n)
//		{
//			return ((dot(P_V2[0],n) > 0) &&
//				(dot(P_V2[1],n) > 0) &&
//				(dot(P_V2[2],n) > 0) &&
//				(dot(P_V2[3],n) > 0));
//		}
//
//		// Helper function for collides_tetrahedron_tetrahedron: checks if
//		// plane v1, v2 is a separating plane.
//		static bool separating_plane_face_B_2(const std::vector<vec3>& V1,
//			const std::vector<vec3>& V2,
//			const vec3& n)
//		{
//			return ((dot(V1[0] - V2[1],n) > 0) &&
//				(dot(V1[1] - V2[1],n) > 0) &&
//				(dot(V1[2] - V2[1],n) > 0) &&
//				(dot(V1[3] - V2[1],n) > 0));
//		}
//
//		// Helper function for collides_tetrahedron_tetrahedron: checks if
//		// edge is in the plane separating faces f0 and f1.
//		static bool separating_plane_edge_A(const std::vector<std::vector<double> >& coord_1,
//			const std::vector<int>& masks,
//			int f0,
//			int f1);
//
//	};
//
//}
//
//#endif
